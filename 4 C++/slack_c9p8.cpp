/*
	Bernadette Slack
	CS 102
	Chapter 9 Program 8 - Mode Function
	This program uses a function taking in an array, it then finds the mode of the array and returns that value.
*/

#include<iostream>

using namespace std;

void bubblesort(double *array, int SIZE); // sorting prototype

double modefinder(double *array, int SIZE); //Prototype

int main()
{
	int SIZE, i;
	double mode = -1, *aptr = nullptr;

	cout << "Please enter the amount of values you'd like to enter: ";
	cin >> SIZE;

    SIZE += 1;

	double array[SIZE];

//	*aptr = &array;

	cout << "Please enter the " << (SIZE -1) << " values below.\n";

	for (i = 0; i < (SIZE - 1); i++)
    {
        cout << "# " << (i + 1) <<": ";
        cin >> array[i];
    }

    bubblesort(array, SIZE);

 /*   cout << "\n\nYour array is: ";
    for (i = 0; i < (SIZE - 1); i++)
    {
        cout << "\n# " << (i + 1) <<": ";
        cout << array[i];
    }
*/
	mode = modefinder(array, SIZE); //call

		if (mode == -1)
		cout << "\nThere is no mode.\n";
			else
			cout << "\nThe mode is : " << mode << ", if there is only one mode.\n";

return 0;
}
void bubblesort(double *array, int SIZE)// sort array function
{
    int i, j, temp = 0;

    for (i = 0; i < SIZE - 2; i++)
    {
        for (j = 0; j < SIZE - i - 2; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }


}
double modefinder(double *array, int SIZE)// mode finder function
{
	int i, moderesult;

		for (i = 0; i < SIZE - 2; i++)
		{
			if (array[i] == array[i - 1])
            {moderesult = array[i];
             break;}
		}
    return moderesult;
}

