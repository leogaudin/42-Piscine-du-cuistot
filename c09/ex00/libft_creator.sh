#!/bin/sh
# Compiling code into objects
gcc -c -Wall -Werror -Wextra *.c
# Creating library
ar -rc libft.a *.o
