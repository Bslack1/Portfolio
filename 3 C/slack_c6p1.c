/* 
	Bernadette Slack
	CS101-01 Ch6 project 1
	Largest number in series including floats, numbers entered until user enters 0.
*/

#include <stdio.h>
int main (void)

{
	float input, largest = 0;

	printf("Enter numbers to compare; one at a time (0 to terminate): ");
	scanf("%f", &input);
	
		largest = input;
		
		while (input > 0)
	{	
		printf("Enter numbers to compare; one at a time (0 to terminate): ");
		scanf("%f", &input);
		
			if (input > largest)
			largest = input;
	}

printf("The largest number entered was %f", largest); /* Still spitting out weird values for decimals. */


return 0;
}

