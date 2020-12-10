#include <stdio.h>

int main( void )
{
char z[100];

printf( "Enter string: " );
scanf( "%[aeiou]", z );
printf( "The input was \"%s\"\n", z );
}
