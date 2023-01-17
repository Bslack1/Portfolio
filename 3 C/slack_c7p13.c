/*
	Bernadette Slack CS101-01
	Chapter 7 project 13
	Calculates average word length in a sentence.
*/

#include<stdio.h>
#include<ctype.h>
int main (void)

{
	char sent;
	float letters = 0, words = 1, average = 0;
	
	printf("Please enter a sentence: ");
	sent = getchar();
	
		while (sent != '\n')
		{
			if (sent != ' ')
			letters++;
										
				if (sent == ' ')
				words++; 
				
			sent = getchar();
		}
	
	average = letters/words;
	printf("\n\nThe average word length is: %.1f.", average);
	
return 0;
}

