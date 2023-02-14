/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 5
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
	
	//set 6th and 7th and print 
	uint8 set_bit=SETBIT(user_num,6);
	set_bit=SETBIT(user_num,7);

	printf("The new number is : %d\n",set_bit);
	
}