/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 10
19/2/2023
------------------------------------
*/
#include "header.h"
void unrepeated_array(uint32 *old_arr , uint8 size_of_array);

void main()
{
	uint8 size_of_array;
	printf("Enter size of array : ");
	scanf("%d",&size_of_array);
	
	printf("Enter the element: \n");
	uint32 old_arr[50] ;
	
	for(uint8 s=0 ; s<size_of_array ;s++){
		scanf("%d",&old_arr[s]);
	}
	unrepeated_array(old_arr,size_of_array);

}

void unrepeated_array(uint32 *old_arr , uint8 size_of_array){
	uint8 i , j ,new_size=1;
	uint32 new_arr[size_of_array];
	new_arr[0]=old_arr[0];
	
	for(i=1 ; i<size_of_array;i++){
		for(j=0 ; j<new_size ;j++){
			if(old_arr[i]==new_arr[j]){
				break;
			}
		}
		if(old_arr[i]!= new_arr[j]){
				new_arr[new_size] =old_arr[i];
				new_size++;
			}
	}
	
	printf("The new array is :\n");
	uint8 z;
	for(z=0 ; z<new_size ; z++){
		printf("%d\n",new_arr[z]);
	}
	
	
	
}