/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 11
10/2/2023
------------------------------------
*/
#include "header.h"




void main()
{
	uint16 num = 0, final_num=0;
	printf("Enter your number: ");
	scanf ("%ld",&num);
	
	final_num = ( (num<<1) + (num<<2) + (num<<3) );
	printf("The multiuplication number is %d",final_num);
}