// expressions.c - Program to show how variable objects can be combined with operators
//
// A basic expressions in C will be composed of identifiers, constants, and operators
//
// Vim Commands
//      yy
//      p
//      /
//      i,a
//
//
#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main( int argc , char *argv[] )
{
    char c = 'c';
    int i, j;
    float f, g;
    double d, e;

    printf("%c\n", c);


    scanf("%d", &i);
    printf("%d\n", i);

    scanf("%d", &j);
    printf("%d\n", j);

    scanf("%f", &f);
    printf("%f\n", f);

    scanf("%f", &g);
    printf("%f\n", g);

    scanf("%lf", &d);
    printf("%lf\n", d);

    scanf("%lf", &e);
    printf("%lf\n", e);

    return i;
}
