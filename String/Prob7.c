/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 6
15/2/2023
------------------------------------
*/
#include "header.h"
void mirror_string (uint8* name_1);


void main(){

   uint8 name_1[50];
   printf("Enter String : ");
   scanf("%s",name_1);
   mirror_string(name_1);
}


void mirror_string (uint8* name_1)
{
	uint8 i,len , temp , check;
	len = strlen(name_1)-1;
	 
	for( i=0 ; i < strlen(name_1)/2 ; i++ ){
		if(name_1[i] == name_1 [len]){
			check =1;
			len--;
		}
		else{
			check=0;
			break;
		}
	}
	
	if(check==1){
		printf("Mirror");
	}
	else{
		printf("Not mirror");
	}
  
}