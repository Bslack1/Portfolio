/*
	Bernadette Slack CS101-01
	Chapter 2 Project 4
	Phone Number
*/

#include <stdio.h>
int main (void)

{	
	int area, prefix, pers;
	
	printf("Enter phone number [(XXX)XXX-XXXX]: ");
	scanf("(%d)%d-%d", &area, &prefix, &pers); 
	
	printf("\nYou entered: %d.%d.%d", area, prefix, pers);
	
	return 0;
	
}

