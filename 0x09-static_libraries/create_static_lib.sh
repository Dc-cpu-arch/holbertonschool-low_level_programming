#! /bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libliball.a *.o
ar -t libliball.a
ranlib libliball.a
