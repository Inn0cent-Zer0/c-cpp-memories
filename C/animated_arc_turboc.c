// animated_arc_turboc.c
// --------------------------------------------------
// 🌈 Draws animated semi-circular arcs using graphics.h
// ⚠️ Works only in Turbo C / DOSBox with BGI graphics
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main() {
    int gdriver = DETECT, gmode;
    int x, y, i;

    // Initialize graphics mode (Turbo C path)
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Get center of screen
    x = getmaxx() / 2;
    y = getmaxy() / 2;

    // Draw animated arcs
    for (i = 30; i < 200; i++) {
        delay(100);               // Pause for animation
        setcolor(i / 10);         // Change color gradually
        arc(x, y, 0, 180, i - 10); // Draw semi-circle arc
    }

    getch();  // Wait for key press before closing
    closegraph();  // Clean up graphics mode
    return 0;
}
