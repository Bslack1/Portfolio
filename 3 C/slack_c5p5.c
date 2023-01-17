/*
	Bernadette Slack
	CS 101-01 Ch5 Pr5
	Calculating state income tax.
	
*/

#include <stdio.h>
int main(void)

{
	float income, baseTax, tax_due;
	
	
	printf("Please enter your income: ");
	scanf("%f", &income);
	printf("\n");
	
	baseTax = (income * .01); 
	
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
						
						
	printf("The taxes due amount to: $%.2f", tax_due);
		
	return 0;
	
}

