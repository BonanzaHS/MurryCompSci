#include <stdio.h>

int x,y;   // Variable Declaration

int squared( int a ); // Function Declaration

int squared(int a)
{
    return a*a;
}


int main()
{
    x = 10; // Assignment Statement
    y = x + 2;  // Assignment using EXPRESSION

    squared(x); // Expression statement/Function call statement
    int x2 = squared(x); // Assignment statement usinf function call

    printf("x squared = %i\n", x2);  // Expression statement/Function call statement

    printf("y squared = %i", squared(y));

    return 0;
}
