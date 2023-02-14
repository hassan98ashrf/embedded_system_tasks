/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 4
29/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num;
	
	printf("Enter the number:"); 			// take the num
	scanf ("%hi",&num); 
	unsigned short count=0;
	
	if (num <=1){							// special case for 0 and 1
			count=1;	
	}
		
	for(int i=2 ; i<=num/2 ; i++){			// prime num %(i>=num/2)=1
		if(num%i==0){
			count=1;
			break;
		}	
	}
	
	if(count==0){
		printf("%hi is prime",num);
	}
	
	else{
		printf("%hi is not prime",num);
	}
	
	
	return 0;
}