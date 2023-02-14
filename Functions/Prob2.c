/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Functions - Problem 2
14/2/2023
------------------------------------
*/
#include "header.h"
void multi (uint8* num_1 , uint8* num_2);



void main()
{
	uint8 num_1 = 0 , num_2 = 0;
	printf ("Enter first number : ");
	scanf ("%hhu",&num_1);
	printf ("Enter second number : ");
	scanf ("%hhu",&num_2);

	multi (&num_1,&num_2);

}

void multi (uint8* num_1 , uint8* num_2)
{	
	if ( *num_2 % *num_1 == 0 ) {
		printf( "%d is a multiple of %d\n", *num_1, *num_2 );
	} 
	else {
		printf( "%d is not a multiple of %d\n", *num_1, *num_2 );
	}

}
