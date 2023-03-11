#!/bin/bash
gcc -Wall -Werror -Wextra -Pedantic -c *.c
ar rc liball.a *.o
