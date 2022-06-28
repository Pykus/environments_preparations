#ubuntu
sudo apt install build-essentials
sudo apt install cmake

Vs Code:
download from internet,
extensions C/C++, Cmake, vscodevim
https://eellaup.medium.com/how-to-set-up-clang-format-in-visual-studio-code-in-a-vagrant-environment-georgiatech-gios-1935ed73efd1


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





curl -sLf https://spacevim.org/install.sh | bash
