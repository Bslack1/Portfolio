/*
	Bernadette Slack CS101-01
	Chapter 7 Project 10
	Count the nunmber of vowels in a sentance. Bonus for consonants!
*/

#include <stdio.h>
#include <ctype.h>
int main (void)

{
	char sentence; 
	int vowel = 0, consonant = 0;

	printf("Enter a sentence: ");
		do {
		
			scanf("%c", &sentence);
			
			switch (toupper(sentence))
			 { 
				case 'A': vowel += 1; break;
				case 'B': consonant += 1; break;
				case 'C': consonant += 1; break;
				case 'D': consonant += 1; break;
				case 'E': vowel += 1; break;
				case 'F': consonant += 1; break;
				case 'G': consonant += 1; break;
				case 'H': consonant += 1; break;
				case 'I': vowel += 1; break;
				case 'J': consonant += 1; break;
				case 'K': consonant += 1; break;
				case 'L': consonant += 1; break;
				case 'M': consonant += 1; break;
				case 'N': consonant += 1; break;
				case 'O': vowel += 1; break;
				case 'P': consonant += 1; break;
				case 'Q': consonant += 1; break;
				case 'R': consonant += 1; break;
				case 'S': consonant += 1; break;
				case 'T': consonant += 1; break;
				case 'U': vowel += 1; break;
				case 'V': consonant += 1; break;
				case 'W': consonant += 1; break;
				case 'X': consonant += 1; break;
				case 'Y': consonant += 1; break;
				case 'Z': consonant += 1; break;
	 	 	 } 
		  }	  

	while (sentence != '\n'); 	  
	
		printf("Your sentence contains %d vowels and %d consonants.", vowel, consonant);		
		
return 0;
}

