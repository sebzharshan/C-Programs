//Takes and integer and gives the square of it

#include <stdio.h>
int square( int a );
int main( void )

{
	
	int a, sq;

	printf( "Enter a integer: " );
	scanf( "%d", &a );
	
	sq = square(a);

	printf( "The square is: %d", sq );
}

//Function for calculating the square of a integer
int square( int a )
{

	int sq;
	
	sq = a * a;
	return sq;

}//End of function

//written by sebastianharshan
