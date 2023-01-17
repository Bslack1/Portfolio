/*
	Bernadette Slack CS101-01
	Chapter 3 Project 5
	Numbers 1-16 Magic Square
	. 
*/

#include <stdio.h>
int main (void)

{
	int numA,numB,numC,numD,numE,numF,numG,numH,numI,numJ,numK,numL,numM,numN,numO,numP;
	int Row1, Row2, Row3, Row4, Col1, Col2, Col3, Col4, DiagLR, DiagRL;
	
	printf("Enter the numbers 1 through 16 in any order: "); 
	scanf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d", 
	&numA,&numB,&numC,&numD,&numE,&numF,&numG,&numH,&numI,&numJ,&numK,&numL,&numM,&numN,&numO,&numP);
	
	printf("\n");
	
	
	printf("\n\t\t%2d %2d %2d %2d", numA, numB, numC, numD);
	printf("\n\t\t%2d %2d %2d %2d", numE, numF, numG, numH);
	printf("\n\t\t%2d %2d %2d %2d", numI, numJ, numK, numL);
	printf("\n\t\t%2d %2d %2d %2d\n", numM, numN, numO, numP);
 
	
	Row1 = numA + numB + numC + numD;
	Row2 = numE + numF + numG + numH;
	Row3 = numI + numJ + numK + numL;
	Row4 = numM + numN + numO + numP;
	
	Col1 = numA + numE + numI + numM;
	Col2 = numB + numF + numG + numH;
	Col3 = numC + numG + numK + numO;
	Col4 = numD + numH + numL + numP;
	
	DiagLR = numA + numF + numK + numP;
	DiagRL = numM + numJ + numG + numD;
	
	printf("\n      Row sums: %d %d %d %d", Row1, Row2, Row3, Row4);
	printf("\n   Column sums: %d %d %d %d", Col1, Col2, Col3, Col4);
	printf("\n Diagonal sums: %d %d", DiagLR, DiagRL);
	
	return 0;

}

