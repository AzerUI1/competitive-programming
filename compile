#!/usr/bin/bash

FILE=${1:-main.cpp}
OUT=${2:-run}

g++ -std=c++20 -O2 -Wall -Wextra -Wshadow -Wconversion -DLOCAL -o $OUT $FILE

echo "Compiled $FILE → $OUT"
