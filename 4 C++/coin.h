#ifndef COIN_H
#define COIN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class coin
{
    private:
        int headscount;
        int tailscount;
        string sideup;
    public:
        coin(int flip)// default constructor
        {
            headscount = 0;
            tailscount = 0;
        }
        void toss()
        {
            int flip = (rand() % (2 - 1 + 1))+1;
            if (flip == 1)
            {
                sideup = "Heads";
                headscount++;
            }
                if (flip == 2)
            {
                sideup = "Tails";
                tailscount++;
            }
        }
        string getsideup()
        {
            return sideup;
        }
        int getheads()
        {
            return headscount;
        }
        int gettails()
        {
            return tailscount;
        }
};

#endif // COIN_H
