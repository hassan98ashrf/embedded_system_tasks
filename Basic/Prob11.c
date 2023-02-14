/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 11
1/2/2023
------------------------------------
*/
#include "header.h"

int main()
{	
	uint16 num = 0,count=0,result=0;
	printf ("Enter your number: ");
	scanf("%lli",&num);
	
	while (num>0){
		count=num%10;
		result=result+count;
		num=num/10;
	}
	printf ("The result is %d ",result);
	
	
	
	return 0;
}