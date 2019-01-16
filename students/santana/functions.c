#include <stdio.h>

int x, y; // Variables declaration

int squared(int a ); //Function declaration

int squared(int a ) // Funtions declarations
{
    return a*a;  // Return statement
}


int main()
{
    x = 10; // Assignment statement
    y = x + 2; // Assignment using EXPRESSION

    squared(x); // Expression statement/Function call statement
    int x2 = squared(x); // Expression statement/Function call statement

    printf("x2 = %i", x2);

    printf("y squared = %i",squared(y));
    return 0;
}
