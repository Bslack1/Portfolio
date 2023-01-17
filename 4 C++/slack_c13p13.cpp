/*
    Bernadette Slack
    CS 102 Chapter 13 project 13 - Tossing coins for a dollar.
*/

#include "coin.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double balance = 0;
    int flip = 0, i, trigger = 0;
    char exit;
    unsigned seed = time(0); // gets time
	srand(seed);//seed random number generator

    cout << "\t\t\t WELCOME \nThis coin toss game will flip 3 coins, a nickel, a dime and a quarter. \n";
    cout << "When any of the coins land on heads, that coin is added to your balance.\n";
    cout << "When your accumulated balance reaches $1.00 you win the game.\n";
    cout << "When your balance goes over $1.00, you lose.\n\n";
    cout << setprecision(2) << fixed;

    cout << "Are you ready to play? Enter to start!";
    cin.get();
    do
    {

        coin nickel(flip); //object creation call constructor
        coin dime(flip); //object creation call constructor
        coin quarter(flip); //object creation call constructor

        nickel.toss();
        if(nickel.getsideup() == "Heads")
        {
            balance += .05;
            cout << "\nYour nickel landed heads up! You've added 5 cents to your balance.";
        }
            else
            {
                cout << "\nYour nickel landed tails up.";
            }
        dime.toss();
        if(dime.getsideup() == "Heads")
        {
            balance += .10;
            cout << "\nYour dime landed heads up! You've added 10 cents to your balance.";
        }
            else
            {
                cout << "\nYour dime landed tails up.";
            }
        quarter.toss();
        if(quarter.getsideup() == "Heads")
        {
            balance += .25;
            cout << "\nYour quarter landed heads up! You've added 25 cents to your balance.";
        }
            else
            {
                cout << "\nYour quarter landed tails up.";
            }

        cout << "\n\nYour balance is currently $" << balance << ".\n\n";

        if (balance < 1.00)
        {
            cout << "Press any letter then enter to flip all three coins again. Otherwise enter X to exit.\n";
            cin >> exit;
            if ((exit == 'X') || (exit == 'x'))
            {
                trigger = 1;
            }
        }
        else if (balance == 1.00)
        {
            cout << "\nCongratulations! You have won the game!!\n";
            cout << "Would you like to play again? y/n : ";
            cin>> exit;
            if ((exit == 'Y') || (exit == 'y'))
            {
                balance = 0.00;
            }
            if ((exit == 'N') || (exit == 'n'))
            {
                trigger = 1;
            }

        }
        else if (balance > 1.00)
        {
            cout << "Sorry, you went over $1.00, you lost.";
            cout << "Would you like to play again? y/n : ";
            cin>> exit;
            if ((exit == 'Y') || (exit == 'y'))
            {
                balance = 0.00;
            }
            if ((exit == 'N') || (exit == 'n'))
            {
                trigger = 1;
            }
        }

    }while (trigger < 1);



return 0;
}
