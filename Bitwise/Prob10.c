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
	
	sint8 max = -1;
	uint16 count = 0;

	while (num) {
		if (!(num & 1)) {
			count++;
			num >>= 1;
			max = MAX(max, count);
		}
		else {

			max = MAX(max, count);
			count = 0;
			num >>= 1;
		}
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
