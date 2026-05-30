#!/bin/bash
riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -O0 -nostdlib -c main.c -o main.o &&
riscv64-unknown-elf-as -march=rv32i -mabi=ilp32 boot.s -o boot.o &&
riscv64-unknown-elf-ld -m elf32lriscv -T linker.ld boot.o main.o -o tmp.elf &&
riscv64-unknown-elf-objcopy -O verilog tmp.elf --only-section=.text --only-section=.text.init mem.hex --verilog-data-width=4 &&
riscv64-unknown-elf-objcopy -O verilog tmp.elf --only-section=.data --only-section=.srodata --only-section=.sdata --only-section=.rodata --only-section=.bss --change-section-lma .data-0x1000 --change-section-lma .sdata-0x1000 --change-section-lma .rodata-0x1000 --change-section-lma .srodata-0x1000 --change-section-lma .bss-0x1000 data_mem.hex --verilog-data-width=4 &&
cp mem.hex ../src/mem.hex &&
cp data_mem.hex ../src/data_mem.hex
