/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Functions - Problem 5
14/2/2023
------------------------------------
*/
#include "header.h"
void add (double* num_1 , double* num_2 );
void sub (double* num_1 , double* num_2 );
void divi (double* num_1 , double* num_2 );
void multi (double* num_1 , double* num_2 );



void main()
{
	double num_1 = 0 , num_2 = 0 ;
	char sym = '\0';
	printf ("Enter first number : ");
	scanf ("%lf",&num_1);
	printf ("Enter symbol : ");
	scanf (" %c",&sym);
	printf ("Enter second number : ");
	scanf ("%lf",&num_2);
	
	
	switch (sym){
		case '+':
			add( &num_1 , &num_2);
		break;
		case '-':
			sub( &num_1 , &num_2);
		break;
		case '/':
			divi( &num_1 , &num_2);
		break;
		case '*':
			multi( &num_1 , &num_2);
		break;
		default:
			printf( "Wrong symbol" );
		
		
	}


}

void add (double* num_1 , double* num_2 )
{	
	double res = *num_1 + *num_2;
	printf( "%.1lf + %.1lf = %.1lf", *num_1 , *num_2 , res );
}

void sub (double* num_1 , double* num_2 )
{	
	double res = *num_1 - *num_2;
	printf( "%.1lf - %.1lf = %.1lf", *num_1 , *num_2 , res );
}

void divi (double* num_1 , double* num_2 )
{	
	double res = *num_1 / *num_2;
	printf( "%.1lf / %.1lf = %.1lf", *num_1 , *num_2 , res );
}

void multi (double* num_1 , double* num_2 )
{	
	double res = *num_1 * *num_2;
	printf( "%.1lf * %.1lf = %.1lf", *num_1 , *num_2 , res );
}
