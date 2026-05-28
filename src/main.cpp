#include <iostream>
#include "Vtop.h"          // Verilator generates this from uart.v
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    // Trace setup
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("uart_trace.vcd");

    uint64_t ticks = 0;
    



    while (ticks < 1000) { 
        top->clk = !top->clk;


        top->eval();
        tfp->dump(ticks);

        ticks++;
        
    }

    tfp->close();
    delete top;

    return 0;
}