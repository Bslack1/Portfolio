/*
    Bernadette Slack CS102
    Chapter 14 project 2 - Day of the Year
    Program taking a number and converting it to a string giving input and month. Not a leap year.
*/


#include <iostream>
#include <string>
#include "DayOfYear.h"

using namespace std;

int main()
{
    int input = 0, index = 0;

    cout << "Please enter a number between 1 - 365: ";
    cin >> input;

    if (input <= 31)
            {
                index = 0;
            }
                if ((input > 31) && (input < 60))
                {
                    index = 1;
                    input -= 31;
                }
                    if ((input >= 60) && (input < 91))
                    {
                        index = 2;
                        input -= 59;
                    }
                        if ((input >= 91) && (input < 121))
                        {
                            index = 3;
                            input -= 90;
                        }
                            if ((input >= 121) && (input < 152))
                            {
                                index = 4;
                                input -= 120;
                            }
                                if ((input >= 152) && (input < 182))
                                {
                                    index = 5;
                                    input -= 151;
                                }
                                    if ((input >= 182) && (input < 213))
                                    {
                                        index = 6;
                                        input -= 181;
                                    }
                                        if ((input >= 213) && (input < 244))
                                        {
                                            index = 7;
                                            input -= 212;
                                        }
                                            if ((input >= 244) && (input < 274))
                                            {
                                                index = 8;
                                                input -= 243;
                                            }
                                                if ((input >= 274) && (input < 305))
                                                {
                                                    index = 9;
                                                    input -= 273;
                                                }
                                                    if ((input >= 305) && (input < 335))
                                                    {
                                                        index = 10;
                                                        input -= 304;
                                                    }
                                                        if ((input >= 335) && (input <= 365))
                                                        {
                                                            index = 11;
                                                            input -= 334;
                                                        }
                                                            if (input > 365)
                                                            {
                                                                cout << "Your number is outside the range.\n";
                                                            }

    DayOfYear instance(input, index);
    instance.print();


    return 0;
}
