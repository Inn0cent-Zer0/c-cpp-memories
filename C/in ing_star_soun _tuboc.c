

#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int count = 50;

    clrscr();  // Clear screen (Turbo C only)

    while (count--) {
        sound(10 * random(100));               // Random beep
        delay(75);                             // Short pause
        nosound();                             // Stop sound

        textattr(random(16) + 'a' + BLINK);    // Random text color with blink
        cprintf("*");                          // Print blinking star
    }

    return 0;
}
