/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 12
10/2/2023
------------------------------------
*/
#include "header.h"




void main()
{
	uint16 num = 0, check_num=0;
	printf("Enter your number: ");
	scanf ("%ld",&num);
	
	check_num = READBIT(num,0);
	if( check_num == 0 ){
		printf("Number %d is even",num);
	}
	else{
		printf("Number %d is odd",num);
	}
}