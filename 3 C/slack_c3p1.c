/* Bernadette Slack, CS101-01 Chapter 3 Project 1 */

#include <stdio.h>

int main (void)

{
	int month, day, year;

	printf("Please enter a date (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\nYou entered the date: %.2d%.2d%.2d", year, month, day);

	return 0;

}

