
/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 7
30/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num,y;
	
	printf("Enter the number:");
	scanf ("%hi",&num); 							//take the number from user
	
	for(unsigned int i=0 ; i<=num; i++){
		y=i*i;										//check second square root
		if(y==num){
			printf("%hi is perfect square",num);	//print result of equation if true
			return 0;
		}
	}

	printf("%hi is not perfect square",num);		//print result of equation if false
	
	return 0;
}