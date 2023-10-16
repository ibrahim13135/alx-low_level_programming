#!/bin/bash
wget -P /tmp https://github.com/ibrahim13135/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgig.so
export LO_PRELOAD=/tmp/libgiga.so
