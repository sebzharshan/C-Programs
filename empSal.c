#include <stdio.h>
int main( void )
{	
	float employeeSal[5];
	int a, b, c = 1, d = 1;
	float salary;
	for( a = 0; a < 5; a++ )
	{
		printf( "Employee Number: %d \n", c );
		printf( "Enter the salary: " );
		scanf( "%f", &employeeSal[a]);
		c++;
	}
        puts( "" );
        puts( "" );
	for( a = 0; a < 5; a++ )
	{
		if( employeeSal[a] <= 10000 ) {
			printf( "Employee Number: %d \n", d );
			printf( "BONUS AVAILABLE \n" );
			salary = employeeSal[a] + 2000;
			printf( "Salary: %.1f \n", salary );
			d++;
		} 
		else {
                        printf( "Employee Number: %d \n", d );
			printf( "NO BONUS \n" );
		}
	}
	return 0;
}

	

