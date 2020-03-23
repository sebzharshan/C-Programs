//Program to find the mean
#include <stdio.h>

//Function main begins program execution
int main( void )
{

	int a;
	float marks[15], mark, mean; 
	float sum = 0;
	
	for( a = 0; a <= 15; a++ )
	{
		printf( "Enter the mark: " );
		scanf( "%f", &marks );
	
			if(( mark >= 0 ) && ( mark <= 20 )) {
				a--;
				}
			else {
				sum = sum + marks[ a ]; 
				}

	}

	mean = sum / 15;
	
	printf( "The mean mark: %f", mean );

	return 0;

}//End of main function
