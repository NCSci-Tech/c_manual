#!/usr/bin/env bash

f="${2::-2}"

if [[ $1 == '-c' ]]; then
    printf "Compiling C...\n"
    gcc $2 -o prog
    printf "Ouput File: prog\n"
elif [[ $1 == '-a' ]]; then
    printf "Compiling Asm...\n"
    nasm $2 -o "${f}.o"
    printf "Linking...\n"
    ld "${f}.o" -o prog
    echo "Output File: prog"
else
    printf "\nUsage: ./ass {mode} {input file}\n"
    printf "Modes~~~~~~~~~~~~~~~~~~~~~\n"
    printf "| -c :: compile C code   |\n"
    printf "| -a :: compile Asm code |\n"
    printf "|Required: nasm, gcc, ld |\n"
    printf "~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
fi
