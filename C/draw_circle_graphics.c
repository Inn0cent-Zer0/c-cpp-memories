#include <graphics.h>   // Graphics library for Turbo C++
#include <stdlib.h>     // For exit()
#include <stdio.h>      // For printf()
#include <conio.h>      // For getch()

int main(void) {
    int gdriver = DETECT, gmode, errorcode;  // Auto-detect graphics driver
    int midx, midy;                          // Coordinates for center of screen
    int radius = 100;                        // Radius of the circle

    // Initialize graphics mode
    initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");

    // Check for initialization errors
    errorcode = graphresult();
    if (errorcode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);  // Exit with error
    }

    // Calculate center of screen
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    // Set drawing color to max available
    setcolor(getmaxcolor());

    // Draw the circle at center
    circle(midx, midy, radius);

    // Wait for key press before closing
    getch();
    closegraph();  // Close graphics mode

    return 0;
}
