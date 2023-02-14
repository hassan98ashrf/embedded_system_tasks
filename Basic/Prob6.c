
/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 6
30/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num,y=1;
	
	printf("Enter the number:");
	scanf ("%hi",&num); 								//take the number from user
	
	for(unsigned int i=num ; i>0; i--){
		y=y*i;											//n!=n*(n-1)*(n-2)*(n-3)*...*1
	}

	printf("The factorial of %hi is: %hi",num,y);		//print result of equation
	
	return 0;
}