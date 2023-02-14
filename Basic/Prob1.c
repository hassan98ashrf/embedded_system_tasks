/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 1
28/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num_1, num_2;
	float result;
	
	scanf ("%hi %hi",&num_1,&num_2); 					 //take 2 int from user
	result= ((num_1+num_2)*3.0)/2.0-10.0;
	printf("The result is: %f",result);					//print result of equation
	
	return 0;
}