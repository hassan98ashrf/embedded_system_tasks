/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 8
19/2/2023
------------------------------------
*/
#include "header.h"
void second_largest_number(uint32 *arr , uint8 size_of_array);

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
	second_largest_number(arr,size_of_array);

}

void second_largest_number(uint32 *arr , uint8 size_of_array){
	uint8 i , j;
	uint32 arr_2[size_of_array];
	
	for(i=0 ; i<size_of_array-1;i++){
		for(j=i+1 ; j<size_of_array ;j++){
			if(arr[j]>arr[i]){
				uint8 temp =arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("The second largest number is : %d\n",arr[1]);
	
}