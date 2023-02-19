/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 7
19/2/2023
------------------------------------
*/
#include "header.h"
void check_number_found(uint32 *arr , uint8 size_of_array , uint8 check_number);

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
	uint8 check_number;
	printf("Enter number : ");
	scanf("%hhu",&check_number);
	check_number_found( arr , size_of_array , check_number );

}

void check_number_found(uint32 *arr , uint8 size_of_array , uint8 check_number){
	uint8 i ,flag=0,index;
	for(i=0 ; i<size_of_array-1;i++){
		if(arr[i]==check_number){
			flag=1;
			index=i;
		}
	}
	if(flag==0){
		printf("%d is not found",check_number);
	}
	else{
		printf("%d has index = %d",check_number,index);
	}
}