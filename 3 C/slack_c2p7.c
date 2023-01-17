/* 
Author: Bernadette Slack CS 101-01
Pay using the smallest bills Ch 2 project 7
*/

#include <stdio.h> 
int main (void)

{
 	int amount, twenty, ten, five, one;  

 
 	printf ("Enter total amount in whole dollars: "); 
	scanf  ("%d", &amount); 
	
	twenty = amount / 20;
	amount = amount - twenty * 20;
	ten = amount / 10;
	amount = amount - ten * 10;
	five = amount / 5;
	amount = amount - five * 5;
	one = amount / 1;

	printf ("$20s: %d\n", twenty);
	printf ("$10s: %d\n", ten);
	printf ("$5s: %d\n", five);
	printf ("$1s: %d\n", one);
	
	return 0;
 }

