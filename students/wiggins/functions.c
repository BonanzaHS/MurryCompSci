#include <stdio.h>

int x, y; //variable declaration

int squared( int a ); //function declaration

int squared( int a ) //function definition (actual code)
{
    return a*a;
}


int main()
{
    x = 10; //assignment statement
    y = x + 2; //assignment using EXPRESSION

    squared(x); //expression statement/function call statement
    int x2 = squared(x); //assignment statement using function call

    printf("x2 = %i\n", x2); //expression statement/function cell statement

    printf("y squared = %i\n", squared(y));
    
    return 0;    
} 
