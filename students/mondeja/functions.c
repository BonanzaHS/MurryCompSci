#include <stdio.h>

int x, y ; //variable declaration

int squared (int a ); //function declaration

int squared(int a) //Function definition (actual cod\{
{
   return a*a; //REturn statement

}

 int main()
{
    x = 10 ; //Assingment statement
    y = x + 2; //Assigment using EXPRRESSIOn

    squared(x); //  Expression statement /Function call statement
        int x2 = squared(x);  //Assignment statement using function call
        printf("x squared = %i\n", x2); //Expression statement /Function call statement
           printf ("y squared = %i\n", squared(y));
        return 0;


}
