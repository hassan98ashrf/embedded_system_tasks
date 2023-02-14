/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 8
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
	
	//revers bits 0---7 1---6 2---5
	uint8 revers_num;
	for(uint8 i=0;i<=7;i++){
		revers_num = revers_num +(READBIT(user_num,i)<<(7-i));
		
	}
	printf("The revers number is : %d\n",revers_num);
	
}