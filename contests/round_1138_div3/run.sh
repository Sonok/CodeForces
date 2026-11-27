#!/bin/sh
# usage: ./run.sh A      compiles A/A.cpp, runs it on A/in.txt, compares with A/expected.txt
L=$1
cd "$(dirname "$0")/$L" || exit 1
g++ -std=gnu++17 -O2 -Wall -Wno-unused-const-variable -Wno-unused-variable "$L.cpp" -o main || exit 1
./main < in.txt > out.txt
if [ ! -s out.txt ]; then echo "Your program printed nothing."; exit 1; fi
if [ ! -s expected.txt ]; then cat out.txt; echo "(no expected.txt yet, output shown above)"; exit 0; fi
if diff -b out.txt expected.txt > /dev/null; then echo "OK"; else echo "DIFFERENT (yours on the left, expected on the right):"; diff -b -y out.txt expected.txt; fi
