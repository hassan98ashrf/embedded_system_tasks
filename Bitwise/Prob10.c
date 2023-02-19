/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Bitwise - Problem 10
10/2/2023
------------------------------------
*/
#include "header.h"

#define MAX(a,b) (a>b?a:b)

uint16 max_zero(uint16 num)
{
	
	uint16 max = 0;
	uint16 count = 0;
	uint16 flag = 0;

	while (num!=0) {
		if (num & 1 == 1) {
			max = MAX(max, count);
			count = 0;
			flag=1;
		}
		else if (flag==1) {

			max = MAX(max, count);
			count ++;
			
		}
	num =num >> 1;
	}
	return max;
}


void main()
{
	uint16 num = 0, zeros=0;
	printf("Enter your number: ");
	scanf ("%ld",&num);
	
	zeros= max_zero(num);
	printf("The number of max consecutive zeros is %d",zeros);
}
