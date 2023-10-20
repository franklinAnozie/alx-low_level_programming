#!/bin/bash
wget -qO /tmp/lns.so https://github.com/franklinAnozie/alx-low_level_programming/blob/main/0x18-dynamic_libraries/lns.so
export LD_PRELOAD=/tmp/lns.so
