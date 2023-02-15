/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 5
15/2/2023
------------------------------------
*/
#include "header.h"

void cmp_of_string ( uint8 *name_1 , uint8 *name_2);

void main()
{	
	uint8 name_1[50] , name_2[50];
	
	printf("Enter first string: ");
	scanf("%s", name_1);
	printf("Enter second string: ");
	scanf("%s", name_2);
	
	cmp_of_string (  name_1 ,  name_2);
  
}

void cmp_of_string ( uint8 *name_1 , uint8 *name_2)
{
	uint8 check=0 , i=0;
	while (name_1[i] != 0){
		if(name_1[i] == name_2[i]){
			check =1;
			i++;
		}
		else{
			check=0;
			break;
		}
	}
	//return 0 if not match and one if matched
	printf("%d", check);
}