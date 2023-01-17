/*
	Bernadette Slack - CS101-01
	Chapter 3 Project 2
	Format product info
	
*/

#include <stdio.h>
int main (void)

{
	float item_number, price, month, day, year;
	
	printf("Enter item number: ");
	scanf("%f", &item_number);
	
	printf("\nEnter unit price: ");
	scanf("%f", &price);
	
	printf("\nEnter purhase date (MM/DD/YYYY): ");
	scanf("%f / %f / %f", &month, &day, &year);
	
	printf("\n\n");
	
	printf("Item \t   Unit \t Purchase \n");
	printf("\t   Price   \t Date \n");
	printf("%-.0f \t   $%.2f \t %.0f/%.0f/%.0f", item_number, price, month, day, year);

	return 0;

}

