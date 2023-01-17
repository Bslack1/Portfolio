/*
	Bernadette Slack CS 101-01
	Ch 6 Project 10
	
	Compare dates in a loop 0/0/0 to terminate. 
*/

#include <stdio.h>
int main (void)

{
	int mm1, mm2, dd1, dd2, yy1, yy2, earliestM, earliestD, earliestY;
	
	printf("Enter first date as mm/dd/yy: ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
		
	earliestM = mm1;
	earliestD = dd1;
	earliestY = yy1;
	
		while ((mm2 != 0) && (dd2 != 0) && (yy2 != 0))
		{ 	  	    
			 	if (yy1 > yy2)  {
				earliestM = mm2;
				earliestD = dd2;
				earliestY = yy2; /* Store values instead of print*/
								}
				
					else if (yy2 > yy1){
					earliestM = mm1;
					earliestD = dd1;
					earliestY = yy1; 
										}
					
						else if (mm1 > mm2) {
						earliestM = mm2;
						earliestD = dd2;
						earliestY = yy2;
											}
						
							else if (mm2 > mm1) {
							earliestM = mm1;
							earliestD = dd1;
							earliestY = yy1; 
												}
							
								else if (dd1 > dd2) {
								earliestM = mm2;
								earliestD = dd2;
								earliestY = yy2;
													}
								
									else if (dd2 > dd1) {
									earliestM = mm1;
									earliestD = dd1;
									earliestY = yy1; 
														}
			printf("\nEnter another date 0/0/0 to terminate: ");
	    	scanf("%d/%d/%d", &mm2, &dd2, &yy2);
									
		}
	
	printf("\n\n %.2d/%.2d/%.2d is the earliest date.", earliestM, earliestD, earliestY);

return 0;

}


	
/*	  do printf("Enter another date  (0/0/0) to terminate: ");
	   scanf("%d/%d/%d", &mm2, &dd2, &yy2); */
	

