/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Functions - Problem 3
14/2/2023
------------------------------------
*/
#include "header.h"
void check_prime (uint8* num_1 );



void main()
{
	uint8 num_1 = 0;
	printf ("Enter number : ");
	scanf ("%hhu",&num_1);
	

	check_prime (&num_1);

}

void check_prime (uint8* num_1 )
{	
	uint8 count=0;
	if (*num_1 <= 1){							// special case for 0 and 1
			count=1;	
	}
		
	for(uint8 i=2 ; i<=*num_1/2 ; i++){			// prime num %(i>=num/2)=1
		if(*num_1%i==0){
			count=1;
			break;
		}	
	}
	
	if(count==0){
		printf("%hi is prime",*num_1);
	}
	
	else{
		printf("%hi is not prime",*num_1);
	}
}