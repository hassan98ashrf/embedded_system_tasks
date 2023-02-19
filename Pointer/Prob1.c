/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Pointer - Problem 1
19/2/2023
------------------------------------
*/
#include "header.h"


void main()
{
	uint32 num = 0x1234;
	uint8 *p;
	p=&num;	
	
	printf("%x",*p);
	
	/*
	big endian --------> 12
	little endian -----> 34
	*/

}
