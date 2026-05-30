#!/bin/bash
verilator -Wall -cc -f files.f --trace-max-array 2048 --trace-max-width 32 --top-module top --exe main.cpp -Wno-fatal --trace && make -C obj_dir -f Vtop.mk Vtop
