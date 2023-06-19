#!/bin/bash

# Compile all .c files into position-independent object files (.o)
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o

echo "Dynamic library liball.so created successfully."
