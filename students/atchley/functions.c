#include <stdio.h>

int x, y;

int squared(int a)
{
    return a*a;
}

int main()
{
    x = 5;
    printf("x squared = %i\n", squared(x));
    return 0;
}
