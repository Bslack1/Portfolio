/*
	Bernadette Slack
	Bonus for programs from exam!
	Program for question #38.
*/

#include<stdio.h>

#define N 10

int add_subtract(int input[N]); 

int main(void)
{
	int input[N]={0}, i;
	
	printf("Please enter 10 numbers, seperated by spaces: ");
		
		for (i = 0; i != 10; i++)
		{
			scanf("%d", &input[i]);
		}

	printf("The difference is %d.", add_subtract(input));
	
return 0;
}

int add_subtract(int input[N])
{
	int even_sum = 0, odd_sum = 0, result = 0;
	
	even_sum = input[0]+input[2]+input[4]+input[6]+input[8];
	odd_sum = input[1]+input[3]+input[5]+input[7]+input[9];
	result = even_sum - odd_sum;
	
	return result;
	
}

