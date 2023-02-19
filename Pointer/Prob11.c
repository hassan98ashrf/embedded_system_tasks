/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 11
18/2/2023
------------------------------------
*/
#include "header.h"
#define MAX(a,b) (a>b)?a:b
void most_occur(uint32 *arr,uint8 size_of_array);

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
	most_occur(arr,size_of_array);
	
	
}

void most_occur(uint32 *arr,uint8 size_of_array){
		
	uint8 i,j,count=1,max=0,max_num=0;
	for(i=0 ; i<size_of_array-1 ; i++){
		for(j=i+1 ; j<size_of_array ; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count>=max){
			max=MAX(max,count);
			max_num=arr[i];
		}
		
		count=1;
	}
	printf("%d is the most occurrence element\nIt occure :   %d",max_num,max);
}