#include <stdio.h>

int x, y;  // Variable declaration

int spuared( int a );  // Function declaration

int squared( int a)    // Function definition (acutal code)
{
    return a*a;
}


int main()
{
    x = 10;
    y = x + 2;

    squared(x);
    int x2 = squared(x);

    printf("x2 = %i", x2);

    printf("y squared = %i", squared(y));

    return 0;

}
