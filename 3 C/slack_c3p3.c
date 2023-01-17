/* 
	Bernadette Slack CS101-01
	Chapter 3 Project 3
	ISBN 
*/

	
#include <stdio.h>
int main (void)

{
	int GSI, group, pub_code, item_num, check_dig;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GSI, &group, &pub_code, &item_num, &check_dig);
	
		
	printf("\n\nGSI prefix: %d", GSI);
	printf("\nGroup identifier: %d", group);
	printf("\nPublisher code: %d", pub_code);
	printf("\nItem number: %d", item_num);
	printf("\nCheck digit: %d", check_dig);
	
	return 0;
}

