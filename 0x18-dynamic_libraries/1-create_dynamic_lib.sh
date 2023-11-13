#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c")

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

gcc -shared -o liball.so $c_files

