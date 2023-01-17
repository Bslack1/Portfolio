/*
	Bernadette Slack
	CS101-01
	Chapter 7 project 11
	Legal display of name, last name first initial. (getchar)
	
	Okay, so this one kind of works. I had to use an array for the last name, which I don't think we were supposed to do. I talked to 4 
	different tutors who all said it was not possible without arrays. So hopefully that is ok. I simply couldn't wrap my mind around it and 
	I can only attend one of the SI sessions so my time to get decent help is limited to one hour a week. 
*/

#include <stdio.h>
#include <ctype.h>
int main (void)

{
	char pieces, firstname, lastname[20];
	
	printf("Please enter your first and last name: ");
	pieces = getchar();
	
	firstname = pieces;
			
		while (pieces !=' ')
		{
			pieces = getchar();
		}
		
		gets(lastname);
		
		printf("\n%s, %c.", lastname, firstname);
	

return 0;
}



















/*	  firstname = getchar(); lastname = getchar(); this will simply give me the second letter and not multiple characters 

{{{{{{{{{{
Best attempt without help, still using arrays though, got it to ALMOST work once, tutor had me change it and I can't get it to run again after 
fixing it...:


    #include <stdio.h>
	#include <ctype.h>
	
	int main (void)
	
	{
		char firstname, lastname[10];
		
		printf("Please enter your first and last name: ");
		firstname = (getchar); gets(lastname);
		
		printf("\n%s, %c.", lastname, firstname);
		
}}}}}}}}}}


*/

