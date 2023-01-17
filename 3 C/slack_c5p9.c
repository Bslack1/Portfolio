/* 

	Bernadette Slack
	CS101-01 Ch5Pr9
	Determine which user entered date is earliest.
	
*/

#include <stdio.h>
int main(void)

{
	int mm1, mm2, dd1, dd2, yy1, yy2;
	
	printf("Enter first date as mm/dd/yy: ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
		
	printf("Enter second date as mm/dd/yy: ");
	scanf("%d/%d/%d", &mm2, &dd2, &yy2);

		if (yy1 > yy2) 
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm2,dd2,yy2, mm1,dd1,yy1);
			else if (yy2 > yy1)
			printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm1,dd1,yy1, mm2,dd2,yy2);
				else if (mm1 > mm2)
				printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm2,dd2,yy2, mm1,dd1,yy1);
					else if (mm2 > mm1)
					printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm1,dd1,yy1, mm2,dd2,yy2);
						else if (dd1 > dd2)
						printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm2,dd2,yy2, mm1,dd1,yy1);
							else if (dd2 > dd1)
							printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.", mm1,dd1,yy1, mm2,dd2,yy2);

	/* Hopefully this program does not have to include previous centuries! */ 

return 0;
}

