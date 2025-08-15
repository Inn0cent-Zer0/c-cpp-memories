#include<stdio.h>      // Includes standard input/output functions
void main()            // Main function (should ideally be 'int main()' in modern C)
{
  int i,j,n=5;         // Declares loop variables and sets number of rows to 5
  clrscr();            // Clears the screen (used in Turbo C, not standard in modern compilers)
  for (i=1;i<=n;i++)   // Outer loop for rows
  {
     for(j=1;j<=i;j++) // Inner loop for printing characters in each row
     {
        printf("%c",'A'+j-1); // Prints characters starting from 'A'
     }
     printf("\n");     // Moves to the next line after each row
  }
  getch();             // Waits for a key press (also Turbo C specific)
}
