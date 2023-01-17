/*
	Bernadette Slack 
	CS101-01 Ch5 Pr7
	Largest and smallest integers from user input.
*/

#include <stdio.h>
int main(void)

{

	int num1, num2, num3, num4, greatest, smallest;
	
	printf("Please enter 4, one or two digit numbers, seperated by a space: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	if ((num1 > num2) && (num1 > num3) && (num1 > num4))
	greatest = num1;
		else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
		greatest = num2;
			else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
			greatest = num3;
				else if ((num4 > num1) && (num4 > num2) && (num4 > num3))
				greatest = num4;
				
	if ((num1 < num2) && (num1 < num3) && (num1 < num4))
	smallest = num1;
		else if ((num2 < num1) && (num2 < num3) && (num2 < num4))
		smallest = num2;
			else if ((num3 < num1) && (num3 < num2) && (num3 < num4))
			smallest = num3;
				else if ((num4 < num1) && (num4 < num2) && (num4 < num3))
				smallest = num4;


/*	  greatest = ((num1 > num2 ? ((num1 > num3) ? (num1 > num4))) : num1 */	   
	
	printf("\nThe largest number is %d. \nThe smallest number is %d.", greatest, smallest);
	
return 0;
}	 

