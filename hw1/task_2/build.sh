echo "Building the addition and substraction library"
rm -rf build
mkdir build

# Include the header file's directory
clang++ -I ./include/ -c src/subtract.cpp -o build/subtract.o
clang++ -I ./include/ -c src/sum.cpp -o build/sum.o

# Archive both the objects and create a library
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o

echo "Building the program"
# -I <include_header_directories>
# -L <include_library_build_folder>
# -o <output file>
clang++ src/main.cpp -I ./include/ -L ./build/ -lipb_arithmetic -o ./results/bin/example