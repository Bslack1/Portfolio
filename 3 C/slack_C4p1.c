/*  
	
	Bernadette Slack
	CS 101-01
	Chapter 4 Project 1 - Reverse a two-digit number.

*/

#include <stdio.h>
int main(void)

{

	int input, digi1, digi2;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &input);
	
	digi1 = input % 10;
	digi2 = input / 10;

	printf("\nThe reversal is:%d%d", digi1,digi2); 

	return 0;
	
}

