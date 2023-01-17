/*  
	
	Bernadette Slack
	CS 101-01 Chapter 6 Project 5 
	Reverse a number of any size by dividing by 10 till 0, using a do loop.

I know that what I really needed to do here was break up the digits within another loop. Because numbers with ending zeros don't work. But I 
didn't have time to figure out the logic with so many possible digits or get help figuring out a different method all together. Sorry, I'll 
keep working on it until it works properly. 

*/

#include <stdio.h>
int main (void)

{

	int input, reversal = 0;
	
	printf("Please enter a positive integer: ");
	scanf("%d", &input);
	
		do 
		{	
			reversal *= 10; 
			reversal += (input % 10);
			input /= 10;     
		}
		while (input != 0);
		
		/*	  if ((input <= 99) && (reversal <= 9))  input 2 digits reversal 1 digit 
			printf("The physical reversal is: %.2d", reversal);	   
		
				else if ((input <= 999) && (reversal <= 99)) input 3 digits reversal 2 digit
				printf("The physical reversal is: %.3d", reversal);
			
					else if ((input <= 9999) && (reversal <= 999))  input 4 digits reversal 3 digit
					printf("The physical reversal is: %.4d", reversal);
				
						else if ((input <= 99999) && (reversal <= 9999))  input 5 digits reversal 4 digit 
						printf("The physical reversal is: %.5d", reversal);
					
							else if ((input <= 999999) && (reversal <= 99999))  input 6 digits reversal 5 digit 
							printf("The physical reversal is: %.6d", reversal);	   
						
								else if ((input <= 9999999) && (reversal <= 999999)) input 7 digits reversal 6 digit 
								printf("The physical reversal is: %.7d", reversal);
								
									else if ((input <= 99999999) && (reversal <= 9999999))  input 8 digits reversal 7 digit 
									printf("The physical reversal is: %.8d", reversal); */
				
	printf("\nThe numeric reversal is: %d", reversal); 

	return 0;
	
}



		   /* xtradigit = input % 10;
			reversal = (reversal * 10) + xtradigit;
			input = input / 10;                         
			
			reversal *= 10;
			reversal += (input % 10);
			input /= 10;
			     
			both still cut off extra zeros 
			
			this doesn't work in if else (input >= 1000) && */

