/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 2
15/2/2023
------------------------------------
*/
#include "header.h"
uint8 size_of_string ( uint8* name);

void main()
{	
	uint8 name[50] , name_size = 0;
  
	printf("Enter your name: ");
	scanf("%s", name);
	
	name_size = size_of_string(name);
  
	printf("Your name is %s.\nSize of name = %d", name , name_size);
	

}

uint8 size_of_string ( uint8* name)
{
	uint8 i = 0;
	while (name[i] != 0){
		i++;
	}
	return i;
}