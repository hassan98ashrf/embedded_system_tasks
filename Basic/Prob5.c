/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 5
29/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num =0;
	
	printf("Enter the number:"); 	// take the num
	scanf ("%hi",&num); 
	
	unsigned short count=0;
	unsigned short i=1;
		
	while (i<num){					// compare between factorial of 2
		i=i*2;
		count++;
	}
	
	if(i==num){
		printf("%hi has %hi power of 2",num,count);
	}
	else{
		printf("%hi has not power of 2",num);
	}
	
	return 0;
}