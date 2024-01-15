#!/bin/bash
wget -P /tmp/ https://raw.github.com/be-great/alx-low_level_programming/master/0x18-dynamic_libraries/testing.so
export LD_PRELOAD=/tmp/testing.so
