alias rt  "report_timing  -transition_time -capacitance -net -to"
alias rf  "report_timing  -transition_time -capacitance -net -from"
alias rth "report_timing  -transition_time -capacitance -net -through"
alias rfm "report_timing  -transition_time -capacitance -net -delay_type min -from"
alias rtm "report_timing  -transition_time -capacitance -net -delay_type min -to"

proc tail {s} {
    return [lindex [split $s /] end]
}

proc cut {s} {
    set tail [expr [string length $s] -1]
    set idx  [string last \/ $s]
    if {$idx < 0} {
        return $s
    } else {
        return [string replace $s $idx $tail]
    }
}

proc lsc {coll} {
    foreach_in_coll itm [sort_collection $coll -dictionary full_name] {
        puts "[get_attr -q $itm full_name]"
    }
}

proc vim {args} {
    regexp {^\s+(\d+)} [history -r 1] junk uniqid
    set tmpfile tmp4vim[pid]${uniqid}.ptlog
    redirect $tmpfile {uplevel $args}
    redirect /dev/null {catch {exec /bin/csh -cf "gvim --nofork $tmpfile;sleep 1;rm $tmpfile" &}}
}

proc max {args} {
    if {[llength $args] > 1} {
        set mylist $args
    } elseif {[llength $args] == 1} {
        set mylist [lindex $args 0]
    } else {
        puts "Error:no args !!!"
        set mylist {}
    }
    set mylist [lminus $mylist "{}"]
    return [expr max ([join $mylist ,])]
}

proc min {args} {
    if {[llength $args] > 1} {
        set mylist $args
    } elseif {[llength $args] == 1} {
        set mylist [lindex $args 0]
    } else {
        puts "Error:no args !!!"
        set mylist {}
    }
    set mylist [lminus $mylist "{}"]
    return [expr min ([join $mylist ,])]
}

proc chomp_digit {data sig} {
    return [expr int([expr $data * pow(10,$sig)])/pow(10,$sig)]
}

proc get_skew {args} {
    if {[llength $args] > 1} {
        set mylist $args
    } elseif {[llength $args] == 1} {
        set mylist [lindex $args 0]
    } else {
        puts "Error:no args !!!"
        set mylist {}
    }
    set skew_l [join $mylist ,]
    return [chomp_digit [expr max($skew_l) - min($skew_l)] 5]
}
proc sum {args} {
    if {[llength $args] > 1} {
        set mylist $args
    } elseif {[llength $args] == 1} {
        set mylist [lindex $args 0]
    } else {
        puts "Error:no args !!!"
        set mylist {}
    }
    set my_sum 0.0
    foreach n $mylist {
        if {$n != ""} {
            set my_sum [expr $my_sum + $n + 0.0]
        }
    }
    return $my_sum
}

proc gck {pin} {
    return [get_attr [get_pins $pin] clocks]
}


proc afi {pin} {
   if {[get_ports $pin -quiet] == ""} {
       set obj [get_pins  $pin]
   } else {
       set obj [get_ports $pin]
   }
    return [all_fanin -flat -startpoints_only -to $obj]
}


proc afo {pin} {
   if {[get_ports $pin -quiet] == ""} {
       set obj [get_pins  $pin]
   } else {
       set obj [get_ports $pin]
   }
    return [all_fanout -flat -endpoints_only -from $obj]
}

proc afick {pin} {
   if {[get_ports $pin -quiet] == ""} {
       set obj [get_pins  $pin]
   } else {
       set obj [get_ports $pin]
   }
   set tmp_coll [all_fanin -flat -startpoints_only -only_cells -to $obj]
   if {$tmp_coll != ""} {
       foreach_in_coll tmp_cell $tmp_coll {
           set cell_name [get_attr $tmp_cell full_name]
           return [gck [get_pins ${cell_name}/* -filter "is_clock_pin == true"]]
       }
   }
}

proc afock {pin} {
   if {[get_ports $pin -quiet] == ""} {
       set obj [get_pins  $pin]
   } else {
       set obj [get_ports $pin]
   }
   set tmp_coll [all_fanout -flat -endpoints_only -only_cells -from $obj]
   if {$tmp_coll != ""} {
       foreach_in_coll tmp_cell $tmp_coll {
           set cell_name [get_attr $tmp_cell full_name]
           return [gck [get_pins ${cell_name}/* -filter "is_clock_pin == true"]]
       }
   }
}

proc gc {pin} {
    return [get_attr [get_pins $pin] case_value]
}

proc d {pin} {
    if {[get_ports -q $pin] == ""} {
        return [get_attr [get_pins $pin] pin_direction]
    } else {
        return [get_attr [get_ports $pin] port_direction]
    }
}

proc proc_create_clock {list} {
    foreach line [split $list \n] {
        foreach {clk_name clk_period setup_uncert hold_uncert clk_point duty_cycle} $line {
            if {[get_ports $clk_point -quiet] == ""} {
                set clk_source [get_pins  $clk_point]
            } else {
                set clk_source [get_ports $clk_point]
            }
            if {$duty_cycle == ""} {
                create_clock -name $clk_name -period $clk_period -waveform "0 [expr $clk_period * 0.5]" $clk_source -add
            } else {
                create_clock -name $clk_name -period $clk_period -waveform "0 [expr $clk_period * $duty_cycle]" $clk_source -add
            }
            set_clock_uncertainty -setup $setup_uncert [get_clocks $clk_name]
            set_clock_uncertainty -hold  $hold_uncert  [get_clocks $clk_name]
        }
    }
}

proc proc_create_vclock {list} {
    foreach line [split $list \n] {
        foreach {clk_name clk_period setup_uncert hold_uncert clk_point duty_cycle} $line {
            if {$duty_cycle == ""} {
                create_clock -name $clk_name -period $clk_period -waveform "0 [expr $clk_period * 0.5]" -add
            } else {
                create_clock -name $clk_name -period $clk_period -waveform "0 [expr $clk_period * $duty_cycle]" -add
            }
            set_clock_uncertainty -setup $setup_uncert [get_clocks $clk_name]
            set_clock_uncertainty -hold  $hold_uncert  [get_clocks $clk_name]
        }
    }
}
proc proc_create_gclock {list} {
    foreach line [split $list \n] {
        foreach {clk_name master div_num setup_uncert hold_uncert clk_point edge_value} $line {
            if {[get_ports $clk_point -quiet] == ""} {
                set clk_source [get_pins  $clk_point]
            } else {
                set clk_source [get_ports $clk_point]
            }
            set source [get_attr [get_clocks $master] sources]
            if {$edge_value== ""} {
                create_generated_clock -name $clk_name -master $master -source $source $clk_source -div $div_num -add
            } else {
                create_generated_clock -name $clk_name -master $master -source $source $clk_source -edges "$edge_value" -add
            }
            set_clock_uncertainty -setup $setup_uncert [get_clocks $clk_name]
            set_clock_uncertainty -hold  $hold_uncert  [get_clocks $clk_name]
        }
    }
}

proc get_yls_ports_pins {pin} {
    if {[get_ports -q $pin] == ""} {
        get_pins $pin
    } else {
        get_ports $pin
    }
}

proc ppdly {p1 p2} {
    set path [get_timing_path -through [get_pins $p1] -through [get_pins $p2] ] 
    set point_c [get_attr $path points]
    foreach_in_coll c $point_c {
        set pnm [get_attr [get_attr $c object] full_name]
        if {[string match $p1 $pnm]} {
            set dly1 [get_attr $c arrival]
        }
        if {[string match $p2 $pnm]} {
            set dly2 [get_attr $c arrival]
        }
    }
    return  [expr $dly2 -$dly1]
}


