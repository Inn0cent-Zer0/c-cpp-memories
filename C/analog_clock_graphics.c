#include <conio.h>       // For kbhit() and getch()
#include <graphics.h>    // For drawing shapes
#include <math.h>        // For sin() and cos()
#include <dos.h>         // For delay()

#define WBC 5            // Watch background color
#define X 200            // Center X coordinate
#define Y 200            // Center Y coordinate

// Function to draw the clock dial
void dial(int x, int y) {
    int const size = 200;

    setfillstyle(1, WBC);           // Outer dial fill
    fillellipse(x, y, size, size);

    setfillstyle(1, WBC + 1);       // Inner dial fill
    fillellipse(x, y, size - 20, size - 20);

    // Draw hour numbers
    outtextxy(x, y - (size - 40), "12");
    outtextxy(x, y + (size - 40), "6");
    outtextxy(x + (size - 40), y, "3");
    outtextxy(x - (size - 40), y, "9");
    outtextxy(x + size / 3, y - 2 * size / 3, "1");
    outtextxy(x + 2 * size / 3, y - size / 3, "2");
    outtextxy(x + 2 * size / 3, y + size / 3, "4");
    outtextxy(x + size / 3, y + 2 * size / 3, "5");
    outtextxy(x - size / 3, y + 2 * size / 3, "7");
    outtextxy(x - 2 * size / 3, y + size / 3, "8");
    outtextxy(x - size / 3, y - 2 * size / 3, "11");
    outtextxy(x - 2 * size / 3, y - size / 3, "10");

    circle(x, y, 4);  // Center dot
}

// Function to draw the minute hand
void minhand(int t) {
    int x1, y1;
    setlinestyle(0, 0, 3);

    x1 = X + (80 * cos(t * 0.1047));
    y1 = Y + (80 * sin(t * 0.1047));

    setcolor(BLACK);
    line(X, Y, x1, y1);  // Draw current minute hand

    setcolor(WBC + 1);
    line(X, Y, X + 80 * cos((t - 1) * 0.1047), Y + 80 * sin((t - 1) * 0.1047));  // Erase previous
    circle(X, Y, 4);
}

// Function to draw the second hand
void sechand(int t) {
    int x1, y1;
    setlinestyle(0, 0, 3);

    x1 = X + (100 * cos(t * 0.1047));
    y1 = Y + (100 * sin(t * 0.1047));

    setcolor(RED);
    line(X, Y, x1, y1);  // Draw current second hand

    setcolor(WBC + 1);
    line(X, Y, X + 100 * cos((t - 1) * 0.1047), Y + 100 * sin((t - 1) * 0.1047));  // Erase previous
    circle(X, Y, 4);
}

void main() {
    int gd = DETECT, gm, i = 0, j, flag = 1;

    initgraph(&gd, &gm, "C:\\turboc3\\bgi");  // Initialize graphics mode

    dial(X, Y);  // Draw clock face

    // Animate clock hands
    do {
        minhand(i);  // Update minute hand
        for (j = 0; j < 60; j++) {
            sechand(j);  // Update second hand
            delay(1000); // Wait 1 second

            if (kbhit()) {  // Exit if key is pressed
                flag = 0;
                break;
            }
        }
        i++;  // Increment minute
    } while (flag);

    closegraph();  // Close graphics mode
}
