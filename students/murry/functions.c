#include <stdio.h>

int x, y; // Variable declaration 

int squared(int a); //Function declaration ( just the name)

int squared(int a) //Funcction definition (actual code) 
{
    return a*a;  //Return Satement
}

int main()
{
    x = 10;  //Assignment Statement 
    y = x + 2; // Assignemnt using EXPRESSION

    squared(x); //Expression statement/ Function call statement
    int x2 = squared(x); //Assignment statement using function call

    printf("x2= %i\n", x2); //Expression statement.function call statement 

    printf("y squared = %i\n", squared(y));   
    return 0;
}
