#include <stdio.h>

int x, y;   // variable declaration (just name)

int squared( int a ); // Function declaration (actual code)

int squared( int a)
{
    return a*a;
}


int main()
{
    x=15; //  (assignment statement)
    y=x+4; // (assignment using expression)

    squared(x); // expression/function call statement
    int x2 = squared(x);    // assignment statement using function call

    printf("x3 = %i", x2);  // expression statement/function call statement

    printf("y squared = %i",squared(y));

    return 0;
}    
