
/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 8
30/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short grade;
	
	printf("Enter the grade:");
	scanf ("%hi",&grade); 					//take the grade from user
	
	if(grade<50){							// analize grade	
		printf("Fail");
	}
	else if(grade<65){						
		printf("pass");
	}
	else if (grade<75){
		printf("Good");
	}
	else if (grade<85){
		printf("Very good");
	}
	else if (grade<=100){
		printf("Excellent");
	}
	else {
		printf("Error");					//exxciptian state
	}
	
	

	return 0;
}