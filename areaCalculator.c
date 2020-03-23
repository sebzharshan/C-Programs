//This program calculates the area of a circle and a rectangle and the volume of a cylinder
#include <stdio.h>

//Function main begins program execution
float circleArea(float radius);
float rectangleArea(float length, float width);
float getVolume(float radius, float height);
int main( void )

{

        //Variables
        float radius, length, width, height, volumeCy, areaRct;
        char type;

        //User Input

        printf( "Enter the type of the object ( C/R ): " );
        scanf( "%c", &type );
        printf( "Enter the radius: " );
        scanf( "%f", &radius );
        printf( "Enter the length: " );
        scanf( "%f", &length );
        printf( "Enter the width : " );
        scanf( "%f", &width );
        printf( "Enter the height: " );
        scanf( "%f", &height );

        //If condition
	
	if( type == 'C' ) { 
                printf( "The object is a CYLINDER" );
	        volumeCy = getVolume( radius, height );
                puts( "" ); 
                printf( "The Volume of the cylinder: %.1f \n", volumeCy ); 
	}
	else if( type == 'R' ) { 
                printf( "The object is a RECTANGLE" );
	        areaRct = rectangleArea( length, width );
                puts( "" ); 
                printf( "The Area of the rectangle: %.1f", areaRct );
	}
	else {
                printf( "INVALID OBJECT" );
        }
		
	return 0;

}//End of main function

//Function for calculating the area of a circle
float circleArea(float radius)
{

        float area;

        area = 3.142 * radius * radius;
        return area;

}//End of function

//Function for calculating the area of a rectangle
float rectangleArea(float length, float width)
{

        float rectArea;

        rectArea = length * width;
        return rectArea;

}//End of function

//Function for calculating the volume of a cylinder
float getVolume(float radius, float height)
{

        float volume;

        volume = 3.142 * radius * radius * height;
        return volume;

}//End of function

//written by sebastianharshan
