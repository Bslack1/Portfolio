/*
    Bernadette Slack CS 102
    Chapter 13 project 12 - Coin Toss
*/

#include<iostream>
#include<cctype>
#include<string>
#include<cstdlib>
#include<ctime>
#include "coin.h"

using namespace std;

int main()
{
	int i, flip;
	unsigned seed = time(0); // gets time
	srand(seed);//seed num gen

	flip = (rand() % (10));
	coin object(flip); //object creation call constructor

	for (i = 0; i < 20; i++)
	{
	    object.toss();
		cout << object.getsideup() << endl;
	}

	cout << "Your twenty coin tosses resulted in:\n";
	cout << "Heads : " << object.getheads() << endl;
	cout << "Tails : " << object.gettails() << endl;

return 0;
}
