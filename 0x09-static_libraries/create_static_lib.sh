#!/bin/bash
gcc -Wall -pedantic -Werrorb -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
