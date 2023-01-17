/* 
	Bernadette Slack CS 101-01
	Chapter 12, project 12b.
	Modify 12a using pointers.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 100

bool test(char fw[], char bw[], int length);

int main(void)
{
	char fw[MAX] = {0}, bw[MAX] = {0}, input, *p1, *p2;
	int length = 0;
	
	printf("Enter your sentence: ");
	input = getchar();
	
		for (p1 = &fw[0]; (input = tolower(input)) != '\n'; p1++)
		{
			if ((input != '.') && (input != '!') && (input != '?') && (input != ','))	  
			{
				*p1 = input;
				length++;
			}
			
			input = getchar();	   
		}
		
		printf("%s\n", fw);
		  	  	  
		for (p2 = &bw[0], p1 = &fw[length-1]; p2 < &bw[length]; p2++)
		{
			*p2 = *p1;
			p1--;
			printf("%c", *p2);
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

