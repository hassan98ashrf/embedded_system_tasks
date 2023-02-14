/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 3
5/2/2023
------------------------------------
*/
#include "header.h"

int main()
{	
	// taking number from user
	uint8 user_num;
	printf("Enter your number: ");
	scanf("%d",&user_num);
	
	//clear and print 
	uint8 clear_bit=CLEARBIT(user_num,2);
	printf("The new number is : %d\n",clear_bit);
	
}