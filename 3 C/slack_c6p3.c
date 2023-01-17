/*
	Bernadette Slack
	CS101-01 Ch 6 project 3
	Reducing fraction to lowest terms, based on program from project 2.
	
	Side note! I worked REALLY hard on this one, several smartthinking tutors told me my logic (mid-process) would not work.
	But I got it. So I'm really proud of this one. 
*/

#include <stdio.h>
int main (void)

{
	int num, den, divisor, divisor2, GCD=0, NUM2, DEN2;
	
	printf("Please enter a fraction |a/b|: ");
	scanf("%d/%d", &num, &den);
	
	NUM2 = num; DEN2 = den;
	
		if (den <= 0)
		printf("This fraction is undefined.");
		
			else if (den == 1)
			printf("This fraction is the whole number: %d. ", num);
				
				else if (num % den == 0)
				printf ("This fraction is the whole number: %d. ", num/den);
				
					else if ((num % den != 0) && (num > den))
					{while (NUM2 != 0)
					{	
										
						GCD = DEN2 % NUM2; 
						DEN2 = NUM2; 
						NUM2 = GCD;  
					 			
					}	  
				 
					divisor = DEN2;
					printf("In lowest terms your fraction is: %d/%d.", num/divisor, den/divisor);
						
				 	}	 
							else if ((num < den) && (num % den != 0))
							{while (DEN2 != 0)
							{
								GCD = NUM2 % DEN2;
								NUM2 = DEN2;
								DEN2 = GCD;
							}
								
						
							divisor2 = NUM2;
							printf("In lowest terms: %d/%d.", num/divisor2, den/divisor2);
							}	

return 0;
}
		
		

