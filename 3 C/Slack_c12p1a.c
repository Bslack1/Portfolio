/*
	Bernadette Slack CS101
	Chapter 12 Project 1a
	Reads in user entered message and prints out exact reversal using an array.
*/

#include<stdio.h>
#include<ctype.h>

#define N 50

int main(void)
{
	char sentence[N]={0}, letters;
	int count = 0;
	
	printf("Please enter a sentence: ");
		
	while ((letters = getchar()) != '\n')
	{
		sentence[count] = letters;
		count++;		
	}

	printf("Reversal is: ");
	
	while (count >= 0)
	{
		printf("%c", sentence[count]);
		count--;
	}	 
	
	
	return 0;
}
	
		

