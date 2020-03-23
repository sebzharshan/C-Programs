//Calculates the total cost of items
#include <stdio.h>

//Function main begins program execution
float calculateTotalCost( int itemNo, int quantity );
int main( void )

{
	
	//Variables

	int itemNo, quantity;
	float totCost, totalCost;
	
	//User Input

	printf( "Enter the item number: " );
	scanf( "%d", &itemNo );
	printf( "Enter the quantity: " );
	scanf( "%d", &quantity );

	//Function
	
	totCost = calculateTotalCost( itemNo, quantity ); 
	return 0;

}//End of main function

//Function for calculating the total cost
float calculateTotalCost( int itemNo, int quantity )
{
	
	float totalCost;
	
	if( itemNo == 1 ) {
		printf( "Unit Price is 100.0 \n" );
		totalCost = 100.0 * quantity;
		printf( "The total cost: %.1f$ \n", totalCost );
	}
        else if( itemNo == 2 ) {
                printf( "Unit Price is 200.0 \n" );
                totalCost = 200.0 * quantity;
                printf( "The total cost: %.1f$ \n", totalCost );
        }
	else if( itemNo == 3 ) {
                printf( "Unit Price is 300.0 \n" );
                totalCost = 300.0 * quantity;
                printf( "The total cost: %.1f$ \n", totalCost );
	}
	else {
		printf( "Invalid Item number!" );
	}
	
	return totalCost;

}//End of function


