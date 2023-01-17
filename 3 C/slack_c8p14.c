/*
	Bernadette Slack
	CS 101-01 Chapter 8 Project 14
	Sentence word reversal using char arrays.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)

{
	char input[100]={0}, output[100]={0}, punc = 0;
	int places = 0, bw = 0, length = 0;
	
	printf("Enter a sentence: ");
	gets(input);
	
	while (input[places] != '\n')
	{
		length++;
		
		for (places = 0; places ; places++) /* how do I stop it? places will not = '\0' it will == '\0' or \n' */
		{
			if ((input[places] == ' ') && (input[places] != '\0'))
			printf("\nReversed: ");
			break;
			/* I have no clue what I need to do here */	   
		}
			for (places = length - 1; input[places] <= 0; places--)
			{
				printf("%s", output);
			}
			
				for (bw = length - 1; output[bw]; bw--)
				{
					if ((output[0] == '!') || (output[0] == '.')||(output[0] == '?'))
					{
						punc = output[0];
						break;
					}
					
				}
	}
	printf("%c", punc);

return 0;

}

