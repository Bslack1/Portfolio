/*
	Bernadette Slack CS101-01
	Chapter 5 Progect 4
	Beaufort scale.
*/

#include <stdio.h>
int main(void)

{
	float speed; 
	
	printf("Please enter the wind speed in knots: ");
	scanf("%f", &speed);
	
	printf("\n");

	
	if (speed < 1)
	printf("The wind force description is Calm.");
		else if (speed < 3)
		printf("The wind force description is Light Air.");
			else if (speed < 27) 
			printf("The wind force description is Breeze.");
				else if (speed < 47)
				printf("The wind force description is Gale.");
					else if (speed < 63)
					printf("The wind force description is Storm.");
						else if ((speed >= 63) && (speed < 300))
						printf("The wind force description is Hurricane.");
							else if (speed >= 300)
							printf("The wind force description is redundant at this point, I hope you're underground.");

	return 0;

}

