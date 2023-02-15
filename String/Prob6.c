/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 6
15/2/2023
------------------------------------
*/
#include "header.h"
void revers_string (uint8* name_1);


void main(){

   uint8 name_1[50];
   
   printf("Enter String : ");
   scanf("%s",name_1);
  
  revers_string(name_1);
}


void revers_string (uint8* name_1)
{
	uint8 i,len , temp;
	len = strlen(name_1)-1;
	 
	for( i=0 ; i < strlen(name_1)/2 ; i++ ){

		temp = name_1[i];
		name_1[i] = name_1[len];
		name_1[len]=temp;
		len--;
   }

   printf("\nReverse string :%s",name_1);
}