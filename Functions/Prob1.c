/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Functions - Problem 1
14/2/2023
------------------------------------
*/
#include "header.h"
void swap_1 (uint8* num_1 , uint8* num_2);
void swap_2 (uint8* num_1 , uint8* num_2);
void swap_3 (uint8* num_1 , uint8* num_2);


void main()
{	
	uint8 num_1 = 0 , num_2 = 0;
	printf ("Enter first number : ");
	scanf ("%hhu",&num_1);
	printf ("Enter second number : ");
	scanf ("%hhu",&num_2);
	
	//swap_1 (&num_1,&num_2);
	//swap_2 (&num_1,&num_2);
	swap_3 (&num_1,&num_2);
	
	printf ("\nAfter swaping\n");
	printf ("\nFirst number is %d \nSecond number is %d", num_1 , num_2);
	
}

void swap_1 (uint8* num_1 , uint8* num_2)
{
		uint8 temp = *num_1;
		*num_1 = *num_2;
		*num_2 = temp;
}

void swap_2 (uint8* num_1 , uint8* num_2)
{
		*num_1 = *num_1 + *num_2;
		*num_2 = *num_1 - *num_2;
		*num_1 = *num_1 - *num_2;
}

void swap_3 (uint8* num_1 , uint8* num_2)
{
		*num_1 = *num_1 ^ *num_2;
		*num_2 = *num_1 ^ *num_2;
		*num_1 = *num_1 ^ *num_2;
}