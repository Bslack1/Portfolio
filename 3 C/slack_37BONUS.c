/*
	Bernadette Slack
	Bonus for programs from exam!
	Program for question #37.
*/

#include<stdio.h>
#include<ctype.h>

int main(void)

{
	char letters;
	int vowels = 0;
	
	printf("Please enter a sentence: ");
	scanf("%c", &letters);
	
		while ((letters=toupper(letters)) != '\n')
		{
			switch(letters)
			{
				case 'A': vowels++; break;
				case 'E': vowels++; break;
				case 'I': vowels++; break;
				case 'O': vowels++; break;
				case 'U': vowels++; break;
			}
			scanf("%c", &letters);
		}
	
	printf("Your sentence has %d vowels.", vowels);
	
return 0;
}

