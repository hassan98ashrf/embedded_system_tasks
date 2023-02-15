/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 4
15/2/2023
------------------------------------
*/
#include "header.h"

void con_of_string ( uint8 *name_1 , uint8 *name_2);

void main()
{	
	uint8 name_1[50] , name_2[50];
	
  
	printf("Enter first string: ");
	scanf("%s", name_1);
	printf("Enter second string: ");
	scanf("%s", name_2);
	
	con_of_string (  name_1 ,  name_2);
  
	

}

void con_of_string ( uint8 *name_1 , uint8 *name_2)
{
	uint8 new[100] , i=0 , j=0;
	
	while (name_1[i] != 0){
		new[j] = name_1[i];
		i++;
		j++;
	}
	
	i=0;
	while (name_2[i] != 0){
		new[j] = name_2[i];
		i++;
		j++;
	}
	printf("The new string is %s", new);
}