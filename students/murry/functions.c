#include <stdio.h>

<<<<<<< HEAD
int x, y; // Variable declaration 

int squared(int a); //Function declaration ( just the name)

int squared(int a) //Funcction definition (actual code) 
{
    return a*a;  //Return Satement
=======
int x, y;   // Variable declaration

int squared( int a );  // Function declaration (just the name)

int squared( int a )   // Function definition (actual code)
{
    return a*a; // Return statement
>>>>>>> a76882d53f0531abff01971d338ead39167f5b1f
}


int main()
{
<<<<<<< HEAD
    x = 10;  //Assignment Statement 
    y = x + 2; // Assignemnt using EXPRESSION

    squared(x); //Expression statement/ Function call statement
    int x2 = squared(x); //Assignment statement using function call

    printf("x2= %i\n", x2); //Expression statement.function call statement 

    printf("y squared = %i\n", squared(y));   
=======
    x = 10; // Assignment statement
    y = x + 2;  // Assignment using EXPRESSION

    squared(x); // Expression statement/Function call statement
    int x2 = squared(x);  // Assignment statement using function call

    printf("x squared = %i\n", x2);  // Expression statement/Function call statement

    printf("y squared = %i\n", squared(y));
>>>>>>> a76882d53f0531abff01971d338ead39167f5b1f

    return 0;
}
