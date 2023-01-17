/*  
	
	Bernadette Slack
	CS 101-01
	Chapter 4 Project 3 - Reverse a three-digit number without arithmetic.

*/

#include <stdio.h>
int main(void)

{

	int dig1, dig2, dig3;
	
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &dig1,&dig2,&dig3);
	
	printf("\n");
	
	printf("The reversal is:%d%d%d", dig3,dig2,dig1); 

	return 0;
	
}

