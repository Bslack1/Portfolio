/*
	Bernadette Slack CS101-01
	Chapter 12 Project 1
	Finding alphabetically largest and smallest numbers from user input.
*/

#include<stdio.h>
#include<string.h>

/* #define N 20   int read_line(char input[], int n); */

int main(void)
{
	int n = 21;
	char smallest_word[n], next_smallest[n], input[n];

	do 
	{
		printf("Please enter a word to compare (4-letters to terminate): ");
		scanf("%s", input);
	
			if (strcmp (input, smallest_word) < 0)
			{
				strcpy(next_smallest, smallest_word);
				strcpy(smallest_word, input);
			}
				else if ((strcmp (input, smallest_word) == 0) && (strcmp (input, next_smallest) < 0))
				strcpy(next_smallest, input);
					
					else if (strcmp (input, next_smallest) < 0)
					strcpy(next_smallest, input);
			
						
	}while (strlen(input) != 4);				
		
	printf("\nThe smallest is: %s.", smallest_word);
	printf("\nThe next smallest is: %s.", next_smallest);	 
}

