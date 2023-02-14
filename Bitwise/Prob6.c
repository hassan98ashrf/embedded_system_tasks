/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 6
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
	
	uint8 revers_num=0;
	for(uint8 i= 0 ; i<8 ;i++){
		if(i==2 || i==6){
			revers_num = revers_num +((READBIT(user_num,i))<<(8-i));
			continue;
		}
		revers_num = revers_num +((READBIT(user_num,i))<<i);
	}
	
	printf("%d",revers_num);

	
}