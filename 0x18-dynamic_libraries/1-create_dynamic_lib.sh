#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -fPIC -shared -o liball.so *.c
