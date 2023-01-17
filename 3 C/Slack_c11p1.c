/*
	Bernadette Slack CS101-01
	Chapter 11 Project 1
	Modify project 7 from chapter 2.
	Smallest number of bills to pay amount.
	Passing in int variables through a void function "pay amount" using pointers so function can return multiple variables. 
*/


#include <stdio.h> 

int twenty = 0, ten=0, five = 0, one = 0;
	
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main (void)

{
	int dollars = 0;
 	 
	int *twenties = &twenty, *tens = &ten, *fives = &five, *ones = &one;

 	printf ("Enter total amount in whole dollars: "); 
	scanf  ("%d", &dollars); 
	
	pay_amount(dollars, twenties, tens, fives, ones);

	printf ("$20s: %d\n", twenty);
	printf ("$10s: %d\n", ten);
	printf ("$5s: %d\n", five);
	printf ("$1s: %d\n", one);
	
	return 0;
 }

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
		
	*twenties = dollars / 20;
	dollars = dollars - (twenty * 20);
	*tens = dollars / 10;
	dollars = dollars - (ten * 10);
	*fives = dollars / 5;
	dollars = dollars - (five * 5);
	*ones = dollars / 1;
	
}

