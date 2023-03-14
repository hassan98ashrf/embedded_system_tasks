/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Struct - Problem 1
14/3/2023
------------------------------------
*/
#include "header.h"

struct data{
	float time;
};

struct data diff (struct data number_1 ,struct data number_2){
	struct data temp;
	temp.time = number_1.time-number_2.time;
	
	return temp;
}

void main()
{
	struct data temp,number_1,number_2;
	printf("Enter 1st time : ");
	scanf("%f",&number_1.time);
	printf("Enter 2nd time : ");
	scanf("%f",&number_2.time);
	temp =  diff( number_1 ,  number_2);
	printf("The difference is %.3f",temp.time);
}