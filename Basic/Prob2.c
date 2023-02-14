/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 2
28/1/2023
------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short num_1,num_2,result;
	
	printf("Enter the first number:"); 			// take the first num
	scanf ("%hi",&num_1); 
	printf("Enter the second number:");			// take the second num
	scanf ("%hi",&num_2);
	
	if(num_1!=num_2){							//if not equal
		printf("Not Equal\n");
		result=(num_1>num_2?num_1:num_2);
		printf("The biggest number is :%hi",result);
	}
	else{										//if equal
		printf("Equal\n");
	}
	
	return 0;
}