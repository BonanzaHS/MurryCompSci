#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{


    int x, y, z;
    char a, b, c;
    double d1, d2, d3;
    float f1, f2, f3;

    printf("sizeof( int ) = %i\n", sizeof(int));
    printf("sizeof( char ) = %i\n", sizeof(char));
    printf("sizeof( float ) = %i\n", sizeof(float));
    printf("sizeof( double ) = %i\n", sizeof(double));


    // Data type modifiers

    short int shx, shy, shz;
    long int lx, ly, lz;

    printf("sizeof( short int ) = %i\n", sizeof(short int));
    printf("sizeof( long int) = %i\n", sizeof(long int));


    lx = 42512341L;
    ly = 453524414l;
    lz = 2343243.34242342L;

    signed int sx, sy, sz;
    unsigned int usx, usy, usz;

    unsigned char uchar1, uchar2, uchar3;

    long double ld1, ld2, ld3;

    printf("size of ( long double ) = %i\n", sizeof(long double));
         

    // Storage CLass Specifiers

    auto int ax;
    extern int ex;
    static int stx;
    register int rx;

    
    // Type Qualifiers

    const int cx;
    volatile int vx;






    scanf("%i %i %i", &x, &y, &z);

    printf("%i %i %i\n", x + 2, 5*y, z + x - y);

    if(x || y || z)  // if( BOOLEAN EXPRESSION ) THEN { do stuff }
    {
        printf("Expression was true\n");
    }
    else
    {
        printf("Expression was false\n");
    }
    return 0;
}
