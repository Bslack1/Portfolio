/* 
	Bernadette Slack - CS 101-01
	Chapter 9 Poject 6
	Add function to polynomial calculator from Chapter 2.
*/

#include <stdio.h>

double calc(double x, double value);

int main (void)

{
	double x, value;
	
	printf ("Choose a value for x in for the following polynomial: ");
	printf ("\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.");
	printf ("\nPlease enter a value for x: ");
	scanf  ("%lf", &x);
		
	printf ("\nThe value of the polynomial is %.2lf", calc(x, value));
	
	return 0;
	
}

double calc(double x, double value)
{

value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

return value;
}

