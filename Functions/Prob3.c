/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Functions - Problem 3
14/2/2023
------------------------------------
*/
#include "header.h"
void check_even_odd (uint8* num_1 );



void main()
{
	uint8 num_1 = 0;
	printf ("Enter number : ");
	scanf ("%hhu",&num_1);
	

	check_even_odd (&num_1);

}

void check_even_odd (uint8* num_1 )
{	
		if ( *num_1 % 2 == 0 ) {
			printf( "%d is an even", *num_1 );
		} 
		else {
			printf( "%d is an odd", *num_1 );
		}

}
