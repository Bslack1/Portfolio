/*
	Bernadette Slack CS101-01
	Chapter 9 project 4
	Modify project 16 from chapter 8. 
	Testing for anagrams modified with 2 functions.
*/


#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>


void read_word(int counts[]);
bool equal_array(int counts1[], int counts[]);

int main(void)
{
	int counts1[26] = {0}, counts2[26] = {0};
	
	printf("Please enter the first word: ");
	read_word(counts1); 

	printf("Please enter the second word: ");
	read_word(counts2); 
	
	if (equal_array(counts1, counts2))
		printf("The two words are anagrams.");
		
		else 
			printf("The two words are not anagrams.");
			
return 0;
}	 
	
void read_word(int counts[]) 
{
	char input;
	scanf("%c", &input);
	while (input != '\n')
	{ 
		
		switch (input = tolower(input))
		{
			case 'a' : counts[0] += 1; break;
			case 'b' : counts[1] += 1; break;
			case 'c' : counts[2] += 1; break;
			case 'd' : counts[3] += 1; break;
			case 'e' : counts[4] += 1; break;
			case 'f' : counts[5] += 1; break;
			case 'g' : counts[6] += 1; break;
			case 'h' : counts[7] += 1; break;
			case 'i' : counts[8] += 1; break;
			case 'j' : counts[9] += 1; break;
			case 'k' : counts[10] += 1; break;
			case 'l' : counts[11] += 1; break;
			case 'm' : counts[12] += 1; break;
			case 'n' : counts[13] += 1; break;
			case 'o' : counts[14] += 1; break;
			case 'p' : counts[15] += 1; break;
			case 'q' : counts[16] += 1; break;
			case 'r' : counts[17] += 1; break;
			case 's' : counts[18] += 1; break;
			case 't' : counts[19] += 1; break;
			case 'u' : counts[20] += 1; break;
			case 'v' : counts[21] += 1; break;
			case 'w' : counts[22] += 1; break;
			case 'x' : counts[23] += 1; break;
			case 'y' : counts[24] += 1; break;
			case 'z' : counts[25] += 1; break;
		}
		
		scanf("%c", &input);
	}
}

bool equal_array(int counts1[], int counts2[]) 
{	 
	 for (int letters = 0; letters <= 25; letters++) 
     {
	     if (counts1[letters] != counts2[letters]) 
		 return false;	  	   
 	 }
	 return true;
}

