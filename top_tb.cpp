#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "vbuddy.cpp"    
#define MAX_SIM_CYC 10000

int main(int argc, char **argv, char **env){
  int simcyc;
  int tick;

  Verilated::commandArgs(argc, argv);

  Vtop * top = new Vtop;

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");
 
  if (vbdOpen()!=1) return(-1);
  vbdHeader("Coursework");

  top->clk = 1;
  top->rst = 0;

  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    for (tick=0 ; tick < 2 ; tick++) { 
            tfp->dump (2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval ();
        }

    vbdHex(4, (int(top->a0) >> 16) & 0xF);
    vbdHex(3, (int(top->a0) >> 8) & 0xF);
    vbdHex(2, (int(top->a0) >> 4) & 0xF);
    vbdHex(1, int(top->a0) & 0xF);

    vbdBar(top->a0);

    vbdCycle(simcyc+1);

    if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
        exit(0);                
  }

  vbdClose();     
  tfp->close(); 
  exit(0);
}