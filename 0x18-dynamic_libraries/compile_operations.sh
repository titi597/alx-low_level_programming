#!/bin/bash

# Compile C code into a dynamic library
gcc -shared -fPIC -o 100-operations.so 100-operations.c

if [ $? -eq 0 ]; then
    echo "Dynamic library 100-operations.so successfully created."
else
    echo "Error creating dynamic library 100-operations.so."
fi
