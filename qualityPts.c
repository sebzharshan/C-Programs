//This program determines the Quality point according to a set of if conditions
#include <stdio.h>

//Function main begins program execution
float average( float avg );
int main( void )

{
	
	//Variable	
	
	float a, qualityPoint;

	//Function

	qualityPoint = average( a );
	
	return 0;


}//End of main function

//Function for the quality points
float average( float avg )
{
	
	//Variable
	
	float a;

	//User Input

	printf( "Enter the average: " );
	scanf( "%f", &a );

	//If condition
	
	if(( a <= 100 ) && ( a >= 90 )) {
		printf( "The Quality Point: 4" );
		puts( "" );
	}
	else if(( a <= 89 ) && ( a >= 80 )) {
		printf( "The Quality Point: 3" );
                puts( "" );
	}
	else if(( a <= 79 ) && ( a >= 70 )) {
		printf( "The Quality Point: 2" );
                puts( "" );
	}
	else if(( a <= 69 ) && ( a >= 60 )) {
		printf( "The Quality Point: 1" );
                puts( "" );
	}
	else {
		printf( "The Quality Point: 0" );
	}

	return a;	
}//End of function
//written by sebastianharshan
