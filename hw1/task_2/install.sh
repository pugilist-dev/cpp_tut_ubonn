rm -rf install
mkdir install
# Install the files to ship your lib to share
#cp -r ./include/ ./include/include/
rm -rf build
mkdir build
cd build
cmake ..
make -j4
make install