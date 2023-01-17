/*
	Bernadette Slack CS101
	Chapter 12 Project 1b
	Modify project 12a to use a pounter intead of an int variable to move through array.
*/

#include<stdio.h>
#include<ctype.h>

#define N 50

int main(void)
{
	char sentence[N]={0}, letters, *pointer;
	int length=0;
	
	printf("Please enter a sentence: ");

		for (pointer = &sentence[0]; (letters = getchar()) != '\n'; pointer++)
		{
			*pointer = letters;
			length++;
		}

	printf("Reversal is: ");
	
	for (; pointer >= &sentence[0]; pointer--)
	{
		printf("%c", *pointer);
	}	 
	
		
	return 0;
}

