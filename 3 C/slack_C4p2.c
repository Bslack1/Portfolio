/*  
	
	Bernadette Slack
	CS 101-01
	Chapter 4 Project 2 - Reverse a three-digit number using arithmetic.

*/

#include <stdio.h>
int main(void)

{

	int input, digi1, digi2, digi3, rev;
	
	printf("Enter a three-digit number: ");
	scanf("%d", &input);
	
	digi1 = input / 100;
	digi2 = (input % 100) / 10;
	digi3 = input % 10;
	
	rev = digi3 * 100 + digi2 * 10 + digi1;
	
	printf("\nThe reversal is: %.3d", rev); 

	return 0;
}

