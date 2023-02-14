/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 9
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
	
	//read bits and count 0s & 1s
	uint8 read_num = 0 , count_0=0 , count_1=0;
	
	for(uint8 i=0;i<=7;i++){
		read_num = (READBIT(user_num,i));
		if(read_num==0){
			count_0++;
		}
		else{
			count_1++;
		}
	}
	
	printf("The number of ones : %d\nThe number of zeros : %d\n",count_1,count_0);
	
}