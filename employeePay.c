//Calculates the salaries of employees
#include <stdio.h>

//Function main begins program execution
float calcIncrement( float salary, int noofYearsWorked );
float calcTotSalary( float salary, float increment );
int main( void )

{

	//Variables

	float salary, increment, inc, tot;
	int noofYearsWorked;

	//User Input

	printf( "Enter the Salary: " );
	scanf( "%f", &salary );
	printf( "Enter the Number of Years Worked: " );
	scanf( "%d", &noofYearsWorked );
	
	//Functions

	inc = calcIncrement( salary, noofYearsWorked );
	tot = calcTotSalary( salary, increment );
	
	return 0;
}//End of main fucntion

//Function for calculating the increment 
float calcIncrement( float salary, int noofYearsWorked )
{

	float increment;

	if( noofYearsWorked > 2 ) {
		printf( "Increment available" );
		puts( "" );
		increment = 0.1 * salary;
		printf( "The increment value: %.1f$ \n", increment );
	}
	else {
		printf( "NO Increment available!" );
		puts( "" );	
	}
	return increment;

}//End of function

//Function for calculating the total salary
float calcTotSalary( float salary, float increment )
{
	
	float totalSalary, iNcrement;
	int noofYearsWorked;

	if( noofYearsWorked > 2 ) {
		iNcrement = 0.1 * salary;
		totalSalary = salary + iNcrement;
		printf( "The total salary: %.1f$", totalSalary );
	}
	return totalSalary;

}//End of function
