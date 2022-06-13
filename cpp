#ubuntu
sudo apt install build-essentials
sudo apt install cmake

Vs Code:
download from internet,
extensions C/C++, Cmake


Google Mock:
https://code.google.com/p/googlemock/downloads/list
export GMOCK_HOME=/path/to/gmock-1.X.X
(setx GMOCK_HOME c:\downloads\gmock)

mkdir mybuild
cd mybuild
cmake ..
make

cd $GMOCK_HOME/gtest
mkdir mybuild
cd mybuild
cmake ..
make
