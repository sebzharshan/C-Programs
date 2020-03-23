//Displays a pattern of astericks

#include <stdio.h>
int main( void )

{
	int a = 1;
	int b = 1;
	
	for( a = 1; a <= 5; a++ )
	{
		for( b = 1; b <= a; b++ )
		{
		
			printf( "*" );
		
		}
		printf( "\n");
		
	}
	
	return 0;

}
		
