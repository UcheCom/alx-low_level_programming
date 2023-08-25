#!/bin/bash
wget -p /tmp https://github.com/UcheCom/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
