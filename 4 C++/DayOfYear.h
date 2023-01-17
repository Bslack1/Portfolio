#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <string>

using namespace std;

class DayOfYear
{
    private:
        static string Jan, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec; // static member variables for sting literal months
        int day, i;

    public:
        DayOfYear(int input = 0, int index = 0)  // default constructor
        {
            day = input;
            i = index;
        }
        void print()
        {
            if (i == 0)
               {cout << Jan << " " << day << endl;}
                if (i == 1)
                   {cout << Feb << " " << day << endl;}
                    if (i == 2)
                        {cout << Mar << " " << day << endl;}
                        if (i == 3)
                            {cout << Apr << " " << day << endl;}
                            if (i == 4)
                                {cout << May << " " << day << endl;}
                                if (i == 5)
                                    {cout << June << " " << day << endl;}
                                    if (i == 6)
                                        {cout << July << " " << day << endl;}
                                        if (i == 7)
                                            {cout << Aug << " " << day << endl;}
                                            if (i == 8)
                                                {cout << Sept << " " << day << endl;}
                                                if (i == 9)
                                                    {cout << Oct << " " << day << endl;}
                                                    if (i == 10)
                                                        {cout << Nov << " " << day << endl;}
                                                        if (i == 11)
                                                            {cout<< Dec << " " << day << endl;}

        }



};

string DayOfYear::Jan = "January";
string DayOfYear::Feb = "February";
string DayOfYear::Mar = "March";
string DayOfYear::Apr = "April";
string DayOfYear::May = "May";
string DayOfYear::June = "June";
string DayOfYear::July = "July";
string DayOfYear::Aug = "August";
string DayOfYear::Sept = "September";
string DayOfYear::Oct = "October";
string DayOfYear::Nov = "November";
string DayOfYear::Dec = "December";

#endif // DAYOFYEAR_H
