#include <stdio.h>

int x, y;

int squared(int a );

int squared(int a )
{
    return a*a;
}


int main()
{
    x = 10;
    y = x + 2;

    squared(x);
    int x2 = squared(x);

    printf("x2 = %i\n", x2);

    printf("y squared = %i\n", squared(y));

    return 0;
}
