/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 5
19/2/2023
------------------------------------
*/
#include "header.h"
void smallest_number(uint32 *arr , uint8 size_of_array);

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
	smallest_number(arr,size_of_array);

}

void smallest_number(uint32 *arr , uint8 size_of_array){
	uint8 i , j;
	for(i=0 ; i<size_of_array-1;i++){
		for(j=i+1 ; j<size_of_array ;j++){
			if(arr[j]<arr[i]){
				uint8 temp =arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	printf("The min number is : %d\n",arr[0]);
	
}