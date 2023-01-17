/* 
Author: Bernadette Slack - CS 101.01
Value of x for given polynomial, ch 2 project 5.
*/

#include <stdio.h>

int main (void)

{
	float x, value;
	
	printf ("Choose a value for x in for the following polynomial: ");
	printf ("\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.");
	printf ("\nPlease enter a value for x: ");
	scanf  ("%f", &x);
	
	value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	
	printf ("\nThe value of the polynomial is %.2f", value);
	
	return 0;
	
}

