//This program reads numbers from an integer array and graph the information in the form of bar chat
#include <stdio.h>

//Function main begins program execution
int main( void )

{

	int a;
	int b[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	int c;

	printf( "Element \t Value \t Histogram\n" );
	
	for( a = 0; a <= 9; a++ )
	{
		
		printf( "%d \t\t %d  \t", a, b[a] );
		
		for( c = 0; c < b[a]; c++ )
		{
			printf("*");
		}
		puts( "" );
	}
	
	puts( "" );
		
	return 0;

}//End of main function 
