//This program takes two integers, adds them up and displays the output
#include <stdio.h>

int add( int a, int b );
int main( void )

{

	int a, b, c;

	printf( "Enter an integer: " );
	scanf( "%d", &a ); 
        printf( "Enter an integer: " );
        scanf( "%d", &b );
	
	c = add( a, b );
	
	printf( "The sum of the two integers are: %d", c );
	
	return 0;
}

//Function for adding two integers
int add( int a, int b )
{

	int addition;

	addition = a + b;
	return addition;

}//End of function
//written by sebastianharshan


