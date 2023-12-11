#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into a dynamic library (liball.so)
gcc -shared -fPIC -o liball.so $c_files

if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so successfully created."
else
    echo "Error creating dynamic library liball.so."
fi
