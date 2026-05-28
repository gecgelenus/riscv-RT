#!/bin/bash
riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -O0 -nostdlib -c main.c -o main.o &&
riscv64-unknown-elf-as -march=rv32i -mabi=ilp32 boot.s -o boot.o &&
riscv64-unknown-elf-ld -m elf32lriscv -T linker.ld boot.o main.o -o tmp.elf &&
riscv64-unknown-elf-objcopy -O verilog tmp.elf mem.hex --verilog-data-width=4 &&
cp mem.hex ../src/mem.hex