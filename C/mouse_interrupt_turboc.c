// mouse_interrupt_turboc.c
// ---------------------------------------------
// 🕹️ This program initializes the mouse using
// interrupt 0x33 in Turbo C (DOS environment).
// ⚠️ Works only in Turbo C / DOSBox setup.
// Not compatible with modern compilers or OS.
// ---------------------------------------------

#include <stdio.h>
#include <dos.h>

void main() {
    union REGS i, o;

    i.x.ax = 1;           // Function 1: Initialize mouse
    int86(0x33, &i, &o);  // Call mouse interrupt

    getch();              // Wait for key press before exit
}
