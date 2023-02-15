/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 3
15/2/2023
------------------------------------
*/
#include "header.h"

void swap_of_string ( uint8 *name_1 , uint8 *name_2);

void main()
{	
	uint8 name_1[50] , name_2[50];
	
  
	printf("Enter first string: ");
	scanf("%s", name_1);
	printf("Enter second string: ");
	scanf("%s", name_2);
	
	swap_of_string (  name_1 ,  name_2);
  
	printf("\nAfter swaping\n\nYour first string is %s.\nYour second string is %s", name_1 , name_2);
	

}

void swap_of_string ( uint8 *name_1 , uint8 *name_2)
{
	uint8 i[50];
	strcpy (i,name_1);
	strcpy (name_1,name_2);
	strcpy (name_2,i);
}