#!/bin/bash
riscv64-unknown-elf-as -march=rv32i -mabi=ilp32 -o code.o code.asm
riscv64-unknown-elf-objcopy code.o -O verilog --verilog-data-width=4
cp code.o mem.hex

