/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 12
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
		
	uint8 i,j,count=1,max=0;
	for(i=0 ; i<size_of_array-1 ; i++){
		
		if(arr[i]==arr[i+1]){
			count++;
			max=MAX(max,count);
		}
		else{
			count=1;
		}
		
		
	}
	printf("The max number of consecutive elements is %d",max);
}