/*
Author: Bernadette Slack - CS101-01
Calculating volume of a sphere, ch 2 project 2.
*/

#include <stdio.h>
#define PI 3.14159f

int main (void)
{

	float volume, radius;
	
	radius = 10.0f; 
	volume = 4.0f/3.0f * PI * radius * radius * radius;
	
	printf("The volume of your sphere is %.2f meters cubed.", volume);
	
	return 0; 
	
}
	

