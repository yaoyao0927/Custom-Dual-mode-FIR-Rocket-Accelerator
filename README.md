# FIR-RoCC-Accelerator  
This is the repository for a FIR compute-oriented accelerator that implemented in chipyard. All work will be included inside.
## 1 Usage
### 1.1 Initial Chipyard Repository Setup
You can refer to the [Chipyard Docs 1.7.0](https://chipyard.readthedocs.io/en/1.7.0/Chipyard-Basics/Initial-Repo-Setup.html)
#### 1.1.1 Dependencies Requirements
Chipyard is developed and tested on Linux-based systems, and working under Windows is not recommended.  
The following dependencies were written based on Ubuntu 16.04 LTS and 18.04 LTS, make sure your platform already has these dependencies.  
```bash
#!/bin/bash
set -ex
sudo apt-get install -y build-essential bison flex software-properties-common curl
sudo apt-get install -y libgmp-dev libmpfr-dev libmpc-dev zlib1g-dev vim default-jdk default-jre
# install sbt: https://www.scala-sbt.org/release/docs/Installing-sbt-on-Linux.html#Ubuntu+and+other+Debian-based+distributions
echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list
curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo apt-key add
sudo apt-get update
sudo apt-get install -y sbt
sudo apt-get install -y texinfo gengetopt
sudo apt-get install -y libexpat1-dev libusb-dev libncurses5-dev cmake
# deps for poky
sudo apt-get install -y python3.8 patch diffstat texi2html texinfo subversion chrpath wget
# deps for qemu
sudo apt-get install -y libgtk-3-dev gettext
# deps for firemarshal
sudo apt-get install -y python3-pip python3.8-dev rsync libguestfs-tools expat ctags
# install DTC
sudo apt-get install -y device-tree-compiler
sudo apt-get install -y python
# install git >= 2.17
sudo add-apt-repository ppa:git-core/ppa -y
sudo apt-get update
sudo apt-get install git -y

# install verilator
sudo apt-get install -y autoconf
git clone http://git.veripool.org/git/verilator
cd verilator
git checkout v4.034
autoconf && ./configure && make -j$(nproc) && sudo make install
```
#### 1.1.2 Setting up the Chipyard 1.7.0
This will initialize and checkout all of the necessary git submodules, and will also validate that you are on the 1.7.0 branch, 
or you can change to the other version.
```bash
git clone https://github.com/ucb-bar/chipyard.git
cd chipyard
# checkout latest official chipyard release
# note: this may not be the latest release if the documentation version != "stable"
git checkout 1.7.0
./scripts/init-submodules-no-riscv-tools.sh
```
#### 1.1.3 Building a Toolchain
This will initialize and checkout all of the necessary git submodules, and will also validate that you are on the 1.7.0 branch, 
or you can change to the other version.
```bash
./scripts/build-toolchains.sh riscv-tools # for a normal risc-v toolchain
```
The `env.sh` file is emitted that sets the PATH, RISCV, and LD_LIBRARY_PATH environment variables, you should run this command everytime you enter the chipyard
```bash
source ./env.sh
```
To make sure everything is properly set, you can test your toolchain environment by generating a Rocket configuration by `Verilator`
```bash
# Enter Verilator directory
cd sims/verilator
make CONFIG=SmallRocketConfig
```
#### 1.1.4 Adding the Accelerator Repo



// This is the template code 😊
# 一级标题
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题
The base C file is the [riscv_boot.c](./riscv_boot.c)  
// 文本块  
  在连续几行文本  
开头加入一个tab  
或者4个空格  
