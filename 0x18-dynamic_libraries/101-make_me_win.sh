#!/bin/bash
wget -P .. https://raw.githubusercontent.com/titi597/alx-low_level_programming/master/0x18-dynamic_libraries/libdeng.so
export LD_PRELOAD="$PWD/../libdeng.so"
