/* 
	Bernadette Slack CS101-01
	Chapter 7 project 4
	Translate alphabetic phone number into numeric.
*/

#include<stdio.h>
#include<ctype.h>
int main (void)

{
	char phnum; /*  toupper here or in while stmt*/
	
	
	printf("Please enter phone number: ");
	phnum = getchar();
/*	  scanf("%s", &phnum); unknown error on this line?*/
	
		while (phnum != '\n')
		{	 	 	 
			switch (toupper(phnum)) /* Do I need to break it up to keep the numerals at the begining? */
			{
			case 'A': case 'B': case 'C': printf("2");break;
			case 'D': case 'E': case 'F': printf("3");break;
			case 'G': case 'H': case 'I': printf("4");break;
			case 'J': case 'K': case 'L': printf("5");break;
			case 'M': case 'N': case 'O': printf("6");break;
			case 'P': case 'R': case 'S': printf("7");break;
			case 'T': case 'U': case 'V': printf("8");break;
			case 'W': case 'X': case 'Y': printf("9");break;
			default:
				if (((phnum >= '0') && (phnum <= '9')) || (phnum == '-') || (phnum == ' '))
				printf("%c", phnum);
					else 
					break;
					
			}
		
			phnum = getchar();
		}	
	

return 0;
}

