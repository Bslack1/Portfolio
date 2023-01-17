/*
	Bernadette Slack
	CS 101-01 Chapter 4 Project 4
	Printing a user entered number in octal.

*/

#include <stdio.h>

int main(void)

{
	int input, ones, tens, hundreds, thousands, tenthousands;
	
	printf("Please enter a number between 0 and 32767: ");
	scanf("%d", &input);
	
	printf("\n");
	
	ones = input % 8;
	tens = input / 8 % 8;
	hundreds = input / 8 /8 % 8;
	thousands = input / 8 /8 /8 % 8;
	tenthousands = input /8 /8 /8 /8 % 8;
	
	
	printf("In octal, your number is: %d%d%d%d%d", tenthousands, thousands, hundreds, tens, ones);

	return 0;
	
}

