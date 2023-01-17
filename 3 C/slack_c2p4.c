/* 
Author: Bernadette Slack CS 101.01
Calculate 5 percent tax. Ch 2 project 4 
*/

#include <stdio.h>
#define TAX .05

int main (void)

{
	float amount, sum;
	
	printf ("Please enter your purchase amount:$ ");
	scanf  ("%f", &amount);
	
	sum = amount * TAX + amount;
	
	printf ("The total of your purchase including a 5 percent tax: $%.2f", sum);
	
	return 0;

}
 /* I took some liberties with the wording since tax hasn't been 5% in some time, I hope this is okay.*/

