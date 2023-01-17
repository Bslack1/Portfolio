/*
	Bernadette Slack
	CS 101-01 Chap 5 Project 1
	Calculate digits.
*/

#include <stdio.h>
int main(void)

{
	int input, digits;
	
	printf("Please enter a number: ");
	scanf("%d", &input);
	
		if (input <= 9) 
		digits = 1;
			else if ((input > 9) && (input <= 99))
			digits = 2;
				else if ((input > 99) && (input <= 999))
				digits = 3;
					else if ((input > 999) && (input <= 9999))
					digits = 4;
						else printf("Digits are greater than 4.");
						
					
		if (input > 9999); else	   	   	   	   
	printf("\n\nThe number %d has %d digits.", input, digits);
	

	return 0;



}

