#include <stdio.h>

int x, y; // Variable declaration

int squared( int a ); // Function declaration (just the name)

int squared( int a)  // Function declaration (actual code)
{
    return a*a;
}


int main()
{
    x = 10; //Assignment statement
    y = x + 2; //Assignment using EXPRESSION

    squared(x); //Expression statement/Function call statement
    int x2 = squared(x); //Assignment statement using function call

    printf("x2 = %i\n", x2); // Expression statement/Function call statement

    printf("y squared = %i", squared(y));


    return 0;
}
