/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 9
19/2/2023
------------------------------------
*/
#include "header.h"
void reverse_array(uint32 *arr , uint8 size_of_array);

void main()
{
	uint8 size_of_array;
	printf("Enter size of array : ");
	scanf("%d",&size_of_array);
	
	printf("Enter the element: \n");
	uint32 arr[50] ;
	
	for(uint8 s=0 ; s<size_of_array ;s++){
		scanf("%d",&arr[s]);
	}
	reverse_array(arr,size_of_array);

}

void reverse_array(uint32 *arr , uint8 size_of_array){
	uint8 i , j;
	uint32 arr_2[size_of_array];
	uint8 index =size_of_array-1;
	
	for(i=0 ; i<size_of_array ; i++){
		arr_2[index-i]=arr[i];
	}
	
	printf("The reverse array is :\n");
	uint8 z;
	for(z=0 ; z<size_of_array ; z++){
		printf("%d\n",arr_2[z]);
	}
	
}