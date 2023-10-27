#!/bin/bash
gcc -Wall -pedantic -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a