/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 4
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
	
	//toggle and print 
	uint8 toggle_bit=TOGGLEBIT(user_num,6);
	printf("The new number is : %d\n",toggle_bit);
	
}