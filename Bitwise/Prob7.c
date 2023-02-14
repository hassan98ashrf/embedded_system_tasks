/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 7
10/2/2023
------------------------------------
*/
#include "header.h"

void main()
{	
	// taking number from user
	uint64 user_num=0;
	printf("Enter your number: ");
	scanf("%x",&user_num);
	
	//revers bits 0---7 1---6 2---5
	uint64 num=0;
	
	//num = ((user_num & 0xff)<<24)+(((user_num>>8)&&0xff)<<16)+(((user_num>>16)&&0xff)<<8)+(((user_num>>24)&&0xff)<<0);
	for(uint32 i=0;i<=24;i=i+8){
		num = num +(((user_num >> i) && 0xff) << (24-i));
		
	}
	
	printf("The revers hexa number is : %x\n",num);
	
}