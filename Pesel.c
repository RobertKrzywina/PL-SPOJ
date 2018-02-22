#include <stdio.h>
#define SIZE 11

int main()
{
    int i, j, t, suma = 0;
    char liczba[ SIZE + 1 ];
    scanf( "%d", & t );
    for( i = 0; i < t; i++ )
    {
        scanf( "%s", & liczba );
        suma = liczba[ 0 ] + liczba[ 4 ] + liczba[ 8 ] + liczba[ 10 ] +
        ( 3 * liczba[ 1 ] ) +( 3 * liczba[ 5 ] ) +( 3 * liczba[ 9 ] ) +
        ( 7 * liczba[ 2 ] ) +( 7 * liczba[ 6 ] ) +( 9 * liczba[ 3 ] ) +( 9 * liczba[ 7 ] );
        if( suma % 10 == 0 )
             puts( "D" );
        else
             puts( "N" );
    }
    
    return 0;
}
