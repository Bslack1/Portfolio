/* 
	Bernadette Slack Cs101-01
	Chapter 8 Project 16
	Testing if two words are anagrams.
	
	I'm not sure where my mental block is with arrays and loops combined. But I guess my logic on these two projects
	was way out in left field. Either way this works... 
*/ 

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)

{
	int alphabet[26] = {0};
	int anagram = 1, count = 0;
	char input;
	
	printf("Please enter the first word: ");
	scanf("%c", &input);
	
	while (input != '\n')
	{
		
		switch (input = tolower(input))
		{
			case 'a' : alphabet[0] += 1; break;
			case 'b' : alphabet[1] += 1; break;
			case 'c' : alphabet[2] += 1; break;
			case 'd' : alphabet[3] += 1; break;
			case 'e' : alphabet[4] += 1; break;
			case 'f' : alphabet[5] += 1; break;
			case 'g' : alphabet[6] += 1; break;
			case 'h' : alphabet[7] += 1; break;
			case 'i' : alphabet[8] += 1; break;
			case 'j' : alphabet[9] += 1; break;
			case 'k' : alphabet[10] += 1; break;
			case 'l' : alphabet[11] += 1; break;
			case 'm' : alphabet[12] += 1; break;
			case 'n' : alphabet[13] += 1; break;
			case 'o' : alphabet[14] += 1; break;
			case 'p' : alphabet[15] += 1; break;
			case 'q' : alphabet[16] += 1; break;
			case 'r' : alphabet[17] += 1; break;
			case 's' : alphabet[18] += 1; break;
			case 't' : alphabet[19] += 1; break;
			case 'u' : alphabet[20] += 1; break;
			case 'v' : alphabet[21] += 1; break;
			case 'w' : alphabet[22] += 1; break;
			case 'x' : alphabet[23] += 1; break;
			case 'y' : alphabet[24] += 1; break;
			case 'z' : alphabet[25] += 1; break;
		}
		
		scanf("%c", &input);
	}
	
	printf("Please enter the second word: ");
	scanf("%c", &input);
	
	while (input != '\n')
	{
		switch (input = tolower(input))
		{
			case 'a' : alphabet[0] -= 1; break;
			case 'b' : alphabet[1] -= 1; break;
			case 'c' : alphabet[2] -= 1; break;
			case 'd' : alphabet[3] -= 1; break;
			case 'e' : alphabet[4] -= 1; break;
			case 'f' : alphabet[5] -= 1; break;
			case 'g' : alphabet[6] -= 1; break;
			case 'h' : alphabet[7] -= 1; break;
			case 'i' : alphabet[8] -= 1; break;
			case 'j' : alphabet[9] -= 1; break;
			case 'k' : alphabet[10] -= 1; break;
			case 'l' : alphabet[11] -= 1; break;
			case 'm' : alphabet[12] -= 1; break;
			case 'n' : alphabet[13] -= 1; break;
			case 'o' : alphabet[14] -= 1; break;
			case 'p' : alphabet[15] -= 1; break;
			case 'q' : alphabet[16] -= 1; break;
			case 'r' : alphabet[17] -= 1; break;
			case 's' : alphabet[18] -= 1; break;
			case 't' : alphabet[19] -= 1; break;
			case 'u' : alphabet[20] -= 1; break;
			case 'v' : alphabet[21] -= 1; break;
			case 'w' : alphabet[22] -= 1; break;
			case 'x' : alphabet[23] -= 1; break;
			case 'y' : alphabet[24] -= 1; break;
			case 'z' : alphabet[25] -= 1; break;
		}
		scanf("%c", &input);
	}
	
	while (count <= 25)
	{
			if (alphabet[count] != 0)
			{	
				anagram = 0;
			}
		
		count++;
	}
	
	if (anagram == 1)
		printf("The two words are anagrams.");
		
		else 
			printf("The two words are not anagrams.");
			
return 0;
}	 
	

