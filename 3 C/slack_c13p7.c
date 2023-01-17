/*
	Bernadette Slack
	CS101-01 Ch13 Project 7
	User enters numerical, program translates to words.
	Project 11 from chapter 5 modified to use arrays using pointers instead of switch statements.
*/

#include <stdio.h>
#include <string.h>

void teens_num(char *teens, int digit2);
void other_digi(char *digistart, char *digiend, int digit1, int digit2);

int main(void)

{
	int digit1, digit2;
					/* 0      1         2         3            4          5           6      	 7             8           9 */
	char const *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
						/*  0          1         2       3      4          5          6       7   */
	char const *digistart[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
						/* 0      1       2         3        4        5        6         7        8   	 9 */
	char const *digiend[] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine", " "};

		
	printf("Please enter a two digit number: ");
	scanf("%1d%1d", &digit1, &digit2);
	
		if (digit1 == 1)
		{
			teens_num(teens, digit2);
			printf("\nYour number is %s.", *teens);
		}	 
		
			else if ((digit1 != 1) && (digit1 + digit2 > 100))
			{
				other_digi(digistart, digiend, digit1, digit2);
				printf("\nYour number is %s%s.", *digistart, *digiend);
			}
			
				else if (digit1 + digit2 >= 100)
				printf("Your number is greater than two digits.");
								
return 0;

}	 
void teens_num(char *pointer1, int digit2)
{
	if (digit2 == 0)
	*teens[0];
		if (digit2 == 1)
		*teens[1];
			if (digit2 == 2)
			*teens[2];
				if (digit2 == 3)
				*teens[3];
					if (digit2 == 4)
					*teens[4];
						if (digit2 == 5)
						*teens[5];
				   	   		if (digit2 == 6)
							*teens[6];  
								if (digit2 == 7)
								*teens[7];
									if (digit2 == 8)
									*teens[8];
										if (digit2 == 9)
										*teens[9];
				   	   	   	   		   	   	   	   
}
void other_digi(char *pointer2, char *pointer3, int digit1, int digit2)
{
	
	if (digit1 == 2)
	*digistart[0];
		if (digit1 == 3)
		*digistart[1];
			if (digit1 == 4)
			*digistart[2];
				if (digit1 == 5)
				*digistart[3];
		   	   		if (digit1 == 6)
					*digistart[4];  
						if (digit1 == 7)
						*digistart[5];
							if (digit1 == 8)
							*digistart[6];
								if (digit1 == 9)
								*digistart[7];
										
	if (digit2 == 0)
	*digiend[9];
		if (digit2 == 1)
		*digiend[0];
			if (digit2 == 2)
			*digiend[1];
				if (digit2 == 3)
				*digiend[2];
					if (digit2 == 4)
					*digiend[3];
						if (digit2 == 5)
						*digiend[4];
				   	   		if (digit2 == 6)
							*digiend[5];  
								if (digit2 == 7)
								*digiend[6];
									if (digit2 == 8)
									*digiend[7];
										if (digit2 == 9)
										*digiend[8];
}

