/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 3
28/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num;
	
	printf("Enter the number:"); 	// take the num
	scanf ("%hi",&num); 
	 
	 if(num%2==0){					//  check even or odd
		 printf("%hi is even",num);
	 }
	 else{
		 printf("%hi is odd",num);
	 }
	
	return 0;
}