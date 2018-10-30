// Datatypes.c - Program to show basic C data types
//
// Vim Commands
//      yy - copy current line
//      p  - paste into line below cursor
//      A  - enter insert mode at end of line
//      O/o - Open new line below/above cursor line
//      /  - Find string
//      cw - change word (delete word, insert mode)
//
#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main( int argc , char *argv[] )
{
    char *s = argv[1];
    char c = s[0];
    int i;
    float f;
    double d;

    printf ("This program was called with \"%s\".\n",argv[0]);
    printf("%s\n", s);
    printf("%c\n", c);


    scanf("%d", &i);
    printf("%d\n", i);

    scanf("%f", &f);
    printf("%f\n", f);

    scanf("%lf", &d);
    printf("%lf\n", d);

    return i;
}
