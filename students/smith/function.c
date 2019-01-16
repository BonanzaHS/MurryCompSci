#include <stdio.h>

int x, y;  // variable declaration

int squared(int a );  // function declaration (just the name)

int squared(int a)   // Function definition (actual code)
{
    return a*a; // return statemnet
}


int main()
{
    x=10; // Assignment statement
    y = x + 2 ; // Assignment using EXPRESSION

    squared(x); // Expression statemnet/Function call statemnet
    int x2 = squared(x); // Assignment statemnet using function call

    printf("x squared = %i\n", x2);  // Expression statement/function call statemnet

    printf("y squared = %i\n", squared (y));

    return 0;
}
