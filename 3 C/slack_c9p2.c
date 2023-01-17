/*
	Bernadette Slack
	CS 101-01 Chapter 9 project 2
	Modify of income tax from 5.5
	Send tax calculations to function.
*/

#include <stdio.h>

double tax_gen(double income, double tax_due);

int main(void)

{
	double income, tax_due;
	
	
	printf("Please enter your income: ");
	scanf("%lf", &income);
	
	printf("\nThe taxes due amount to: $%.2lf", tax_gen(income, tax_due));
		
	return 0;
	
}
double tax_gen(double income, double tax_due)
{
	double baseTax = (income * .01); 
	
		if (income < 750)
		 tax_due = baseTax;
				
			if ((income >= 750) && (income < 2250))
			 tax_due = (((income - 750) * .02) + 7.50);
			
				if ((income >= 2250) && (income < 3750))
				 tax_due = (((income - 2250) * .03) + 37.50);
				
					if ((income >= 3750) && (income < 5250))
					 tax_due = (((income - 3750) * .04) + 82.50);
	
						if ((income >= 5250) && (income < 7000))
						 tax_due = (((income - 5250) * .05) + 142.50);
							
							if (income >= 7000)
							 tax_due = (((income - 7000) * .06) + 230.00);
							 
	return tax_due;
}

