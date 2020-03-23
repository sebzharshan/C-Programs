//Lab Sheet 12
//Hospital details
#include <stdio.h>

//Function main begins program execution

struct doctor {

	//variables	
	int docNo;
	char name[20];
	double charge;
	
	}d1;
int main( void ) 
{
	//structures for the five doctors' details

	struct doctor d1 = { 100, "Dr.Silva", 1500.00};
	struct doctor d2 = { 200, "Dr.Ruberu", 2000.0};
        struct doctor d3 = { 300, "Dr.Perera", 1700.0};
        struct doctor d4 = { 400, "Dr.Dias", 1200.0};
        struct doctor d5 = { 500, "Dr.Alwis", 1800.0};

	//details for doctor 1	

	printf( "Details for Doctor 1 \n" );	
	printf( "Doctor Number: %d \n", d1.docNo );
	printf( "Name: %s \n", d1.name );
	printf( "Charge: %.1lf \n", d1.charge );
	puts( "" );

        //details for doctor 2

        printf( "Details for Doctor 2 \n" );        
        printf( "Doctor Number: %d \n", d2.docNo );
        printf( "Name: %s \n", d2.name );
        printf( "Charge: %.1lf \n", d2.charge );
        puts( "" );

        //details for doctor 3

        printf( "Details for Doctor 3 \n" );        
        printf( "Doctor Number: %d \n", d3.docNo );
        printf( "Name: %s \n", d3.name );
        printf( "Charge: %.1lf \n", d3.charge );
        puts( "" );

        //details for doctor 4

        printf( "Details for Doctor 4 \n" );        
        printf( "Doctor Number: %d \n", d4.docNo );
        printf( "Name: %s \n", d4.name );
        printf( "Charge: %.1lf \n", d4.charge );
        puts( "" );

        //details for doctor 5

        printf( "Details for Doctor 5 \n" );        
        printf( "Doctor Number: %d \n", d5.docNo );
        printf( "Name: %s \n", d5.name );
        printf( "Charge: %.1lf \n", d5.charge );
        puts( "" );

        //creating a file to store the details

        FILE *cfPtr;
        cfPtr = fopen( "appointments.dat", "w" );

        if( cfPtr == NULL ) {
                printf( "File cannot be created!" );
        }
        else if ( cfPtr != NULL ){
                fprintf( cfPtr,"%d %s %.1lf %d %s %.1lf", d1.docNo, d1.name, d1.charge, d2.docNo, d2.name, d2.charge, d3.docNo, d3.name, d3.charge, d4.docNo, d4.name, d4.charge, d5.docNo, d5.name, d5.charge );
	}
	else {
		fclose(cfPtr);
	}

	return 0;

}//End of main function

	

