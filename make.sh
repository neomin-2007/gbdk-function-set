#!/bin/sh

~/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -DUSE-SFR-FOR-REG -c main.o main.c
~/gbdk/bin/lcc -Wl-m -Wl-j -DUSE-SFR-FOR-REG -o main.gb main.c

rm main.*o main.sym main.lst main.asm main.map main.noi

mv main.gb build