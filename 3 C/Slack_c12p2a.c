/*
	Bernadette Slack CS 101-01
	Chapter 12 Project 2a.
	Program checks for a palindrome (letters are the same from right to left), using an array.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 100

bool test(char fw[], char bw[], int length);

int main(void)
{
	char fw[MAX] = {0}, bw[MAX] = {0}, input;
	int length = 0, i;
	
	printf("Enter your sentence: ");
	input = getchar();
	
		for (i = 0; (input = tolower(input)) != '\n'; i++)
		{
			if ((input != '.') && (input != '!') && (input != '?') && (input != ','))/*it wont return to inputing char after mid-sentence ,*/	  
			{
				fw[i] = input;
				length++;
			}
			
			input = getchar();	   
		}
		printf("\n%s", fw);   	  	  
		for (i = 0; i < length; i++)
		{
			
			bw[i] = fw[length - i - 1];
		}
		printf("\n%s", bw);
		
	if (test(fw, bw, length))
	 printf("\nPalindrome");
	 
	 	else 
		 printf("\nNot a Palindrome");
	
	return 0;
}

bool test(char fw[], char bw[], int length)
{
	
	int i;
	
	for (i = 0; i < '\0'; i++);
	{
		if (fw[i] != bw[i])
			return false;
				else 
					return true;
	}
}	 
		
	
	


	
/* if ((fw[i] != '.') && (fw[i] != '!') && (fw[i] != '?') && (fw[i] != ',')) */

