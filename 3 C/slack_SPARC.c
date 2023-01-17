/*
	Bernadette Slack CS101-01
	Spring Break Extra Credit 
	The Game of Sparc.
	
	I feel like my code is kind of a disaster, but it works! This was very hard without help, but I feel like I learned a TON!
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int die1, die2, sparc, roll, NROLL, wins = 0, losses = 0;
	char answer, answer1, answer2, answer3, answer4, other, other1;
	
	srand((unsigned) time(NULL));
	
	printf("\t\t\tWELCOME TO THE GAME OF SPARC!\n");
	printf("\nTo play you will roll 2 die. If you roll the sum of 6 or 7 you immediately win!");
	printf("\nIf you roll the sum of 2 or 12 you immediately lose. Any other sum is your SPARC.");
	printf("\nIf you roll this sum again (SPARC) again you win, but now if you roll the sum of");
	printf("\n6 or 7 again, you lose. Any other sum is ignored and play continues until you either");
	printf("\nroll your SPARC or the sum of 6 or 7.");
	
	printf("\n\nAre you ready to play? Y or N: ");
	answer = getchar();
	
		
		do {    start : 
				die1 = (rand() % 6)+1;
				die2 = (rand() % 6)+1;
				roll = die1 + die2;
				printf("\nYour roll was %d.", roll);
					
				if ((die1 + die2 == 6) || (die1 + die2 == 7))
				{
					++wins;
					printf("\nSince you rolled %d, you win!", roll); /* (((getchar() == 'y') && (answer1 == 'y')) || ((getchar() == 'Y') && (answer1 == 'Y'))) */
					printf("\nDo you want to play again? Y or N: "); 
					answer1 = getchar();  
						if ((getchar() == 'y') || (answer1 == 'Y')) 
						goto start;
							else if ((getchar() != 'y') || (answer1 == 'n') || (answer1 == 'N')) 
							{goto end;};								  	     	 	 	 
				 }	  	  
					else if ((die1 + die2 == 2) || (die1 + die2 == 12))
					{
					 	++losses;
						printf("\nSince you rolled %d, you lose this round.", roll);
						printf("\nDo you want to play again? Y or N: ");
						answer2 = getchar();	
						if ((answer2 == 'Y') || (answer2 == 'y'))
						goto start;  
							else if ((answer2 == 'N') || (answer2 == 'n'))
							goto end;   								  	      	   	   	   	   	   	   	   	      	     	   
				    }
						else if ((die1 + die2 != 6) && (die1 + die2 != 7) && (die1 + die2 != 2) && (die1 + die2 != 12))
						{
							NROLL = roll;
							sparc = NROLL;
						 	printf("\nYour sparc is now %d.", sparc);
							printf("\nPress enter to roll again. ");
							other = getchar();							
								if ((other == '\n') && (getchar() == '\n'))
								goto rollagain;
					     }
							if (sparc == NROLL) 	
							{{	  
								rollagain : 
								die1 = (rand() % 6)+1;
								die2 = (rand() % 6)+1;
								roll = die1 + die2;
								printf("\nYour roll was %d.", roll); 
							  }	   	   
								 if ((die1 + die2 == 6) || (die1 + die2 == 7)) 
								 {
										++losses;
										printf("\nSince you rolled %d, you lose this round.", roll);
										printf("\nDo you want to play again? Y or N: ");
										answer3 = getchar();
										if ((answer3 == 'Y') || (answer3 == 'y'))
										goto start; 
											else if ((answer3 == 'N') || (answer3 == 'n'))
											goto end;   								  	       	   	   	   	   	   	   	   	   	    	   	   	   	   	   
								 }	  	  	  	  	  	  	  	  	  
									else if (sparc == roll)
									{
											++wins;
											printf("\nSince you rolled your SPARC of %d, you win!", roll);
											printf("\nDo you want to play again? Y or N: ");
											answer4 = getchar();	
											if ((answer4 == 'Y') || (answer4 == 'y'))
											goto start;   
												else if ((answer4 == 'N') || (answer4 == 'n'))
												goto end;   								  	     	   	   	   	   	   	   	   	   
									}
										else if ((die1 + die2 != 6) && (die1 + die2 != 7) && (die1 + die2 != sparc))
										{
										 	printf("\nYour roll was %d, enter to roll again.", roll);
											other1 = getchar();
												if (other1 == '\n')
												goto rollagain;
							    		}
							  }   	  	  	  	  	  	  	  
						
  			}while (((answer != 'n') && (answer != 'N')) && ((answer == 'Y') || (answer == 'y')));
end : printf("\n\nWins: %d \nLosses: %d", wins,losses);

return 0;
}

