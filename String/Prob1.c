/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
String - Problem 1
15/2/2023
------------------------------------
*/
#include "header.h"
void convert_letter ( uint8* letter);

void main()
{	
	uint8 letter = '\0';
	printf ("Enter lowercase letter : ");
	scanf (" %c",&letter);
	convert_letter (&letter);

}

void convert_letter ( uint8* letter)
{
	if ( *letter >= 'a' && *letter <= 'z'){
		*letter = *letter - 'a' + 'A';
	}
	printf("The uppercase letter is %c" , *letter);
}