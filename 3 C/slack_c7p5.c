/*
	Bernadette Slack CS 101-01
	Chapter 7 Project 5
	Scrabble score total.
*/

#include <stdio.h>
#include <ctype.h>
int main (void)

{
	int value = 0; 
	char letter;
	printf("Please enter your scrabble word: ");

	do {scanf("%c",  &letter);
			
			switch (toupper(letter))
			{ 
				case 'A': value += 1; break;
				case 'B': value += 3; break;
				case 'C': value += 3; break;
				case 'D': value += 2; break;
				case 'E': value += 1; break;
				case 'F': value += 4; break;
				case 'G': value += 2; break;
				case 'H': value += 4; break;
				case 'I': value += 1; break;
				case 'J': value += 8; break;
				case 'K': value += 5; break;
				case 'L': value += 1; break;
				case 'M': value += 3; break;
				case 'N': value += 1; break;
				case 'O': value += 1; break;
				case 'P': value += 3; break;
				case 'Q': value += 10; break;
				case 'R': value += 1; break;
				case 'S': value += 1; break;
				case 'T': value += 1; break;
				case 'U': value += 1; break;
				case 'V': value += 4; break;
				case 'W': value += 4; break;
				case 'X': value += 8; break;
				case 'Y': value += 4; break;
				case 'Z': value += 10; break;
		}	 }	 
	while (letter != '\n'); 	
	  	  
	printf("The value of this scrabble word is: %d.", value);
		
	
return 0;
}

/*remember single qoutes for A,B,C and '\n' */

