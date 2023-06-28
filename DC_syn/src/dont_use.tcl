
#set LIBVAR_DONT_USE_CELLS   "*FSDPC1BQ_D_* *CT* *Y2* *DEL* *TIE* *0P* *_16 *_20 *_32 *_48 *_64 *_BUF_1 *_BUF_2 *_BUF_3 *_BUF_1P* *_BUF_D_1 *_BUF_D_2 *_BUF_D_3 *_INV_0P* *_INV_1 *_INV_1P* *_INV_2 *_INV_2P* *_INV_3 *_INV_S* *_BUF_S* *FSDAO22PQ*"
set LIBVAR_DONT_USE_CELLS   ""

foreach dont_use_cell $LIBVAR_DONT_USE_CELLS {
    query_objects [get_lib_cells */$dont_use_cell]
    set_dont_use  [get_lib_cells */$dont_use_cell]
}
