/*
	Bernadette Slack CS101-01
	Chapter 11 project 3
	Reducing a fraction from ch 6 pro 3.
	Reducing fraction with a void function, using pointers.
*/

#include <stdio.h>

void reduce1(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
void reduce2(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main (void)

{
	int numerator = 0, denominator = 0;
	int *reduced_numerator = &numerator, *reduced_denominator = &denominator;
	
	printf("Please enter a fraction |a/b|: ");
	scanf("%d/%d", &numerator, &denominator);
	
		if (denominator <= 0)
		printf("This fraction is undefined.");
		
			else if (denominator == 1)
			printf("This fraction is the whole number: %d. ", numerator);
				
				else if (numerator % denominator == 0)
				printf ("This fraction is the whole number: %d. ", numerator/denominator);
				
					else if ((numerator % denominator != 0) && (numerator > denominator))
					{	
						reduce1(numerator, denominator, reduced_numerator, reduced_denominator);
						printf("In lowest terms your fraction is: %d/%d.", numerator, denominator);
					}	 
							else if ((numerator < denominator) && (numerator % denominator != 0))
							{
								reduce2(numerator, denominator, reduced_numerator, reduced_denominator);
								printf("In lowest terms: %d/%d.", numerator, denominator);
							}	

return 0;
}
		
void reduce1(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int divisor = 0, GCD=0, NUM, DEN;
	NUM = numerator; DEN = denominator;
	
	while (NUM != 0)
	{	
		GCD = DEN % NUM; 
		DEN = NUM; 
		NUM = GCD;  
	}
	
	divisor = DEN;
	*reduced_numerator = numerator / divisor;	
	*reduced_denominator = denominator / divisor;
	
}
void reduce2(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int divisor = 0, GCD=0, NUM, DEN;
	NUM = numerator; DEN = denominator;
	
	while (DEN != 0)
	{
		GCD = NUM % DEN;
		NUM = DEN;
		DEN = GCD;
	}
						 	 	 
	divisor = NUM;
	*reduced_numerator = numerator / divisor;
	*reduced_denominator = denominator / divisor;
}

