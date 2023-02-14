/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Basic - Problem 10
1/2/2023
------------------------------------
*/
#include "header.h"

int main()
{
	uint8 num_1_int ,num_2_int,sum_int,subtract_int;	
	float num_1_float , num_2_float,sum_float,subtract_float;
	
	scanf("%hhu %hhu",&num_1_int,&num_2_int);						// take int num from user
	scanf("%f %f",&num_1_float,&num_2_float);					// take float num from user
	
	sum_int = num_1_int + num_2_int;							// sum equations 
	sum_float = num_1_float + num_2_float;	 
	
	subtract_int = num_1_int - num_2_int;						// subtract equations
	subtract_float = num_1_float - num_2_float;
	
	
	printf("%d %d\n",sum_int,subtract_int);
	printf("%.1f %.1f\n",sum_float,subtract_float);
	
	
	return 0;
}