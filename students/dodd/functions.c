#include <stdio.h>

int x, y;   // Variable declaration

int squared( int a );  // Function declaration

int squared( int a)    // Function declaration
{
    return a*a;
}


int main()
{
  x = 10; // Assignment statement
  y = x + 2;  // Asignment using EXPRESSION

  squared(x);  // Expression statement/Function call statement
  int x2 = squared(x);  // Assignment statement using funtion call

  printf("x2 = %i", x2);  // Expression statement/Function call statement

  printf("y squared = %i", squared(y));

  return 0;
}
