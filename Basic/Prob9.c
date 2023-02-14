/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 9
30/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num;
	
	printf("Enter *100* to print the prime number from 0 to 100:"); 	// take the number
	scanf ("%hi",&num); 
	
	
	
	for(unsigned short j=0 ; j<=100 ; j++){
		unsigned short count=0;
		if (j <=1){										// special case for 0 and 1
			count=1;	
		}
		for(unsigned short i=2 ; i<=j/2 ; i++){			// prime num %(i>=num/2)=1
			if(j%i==0){
				count=1;
				break;
			}	
		}
	
		if(count==0){
			printf("%hi \n",j);
		}
	
		
	}
	return 0;
}