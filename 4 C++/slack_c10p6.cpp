/*
	Bernadette Slack CS 102
	Chapter 10 Project 6
	Vowels and Consonants
	Cstring to function as argument, the function counts the number of vowels.
	Cstring to function that counts number of consonants.
	User chooses from a menu to do one or both operations.
*/

#include<iostream>
#include<cctype>
#include<string>
#include<cstring>

using namespace std;

int vowels(char *cstring, int size);

int consonants(char *cstring, int size);

int main()
{
	char cstring[100], *ptr = NULL, input, push;
	int numvowels = 0, numcons = 0, size, i;

	cout << "Please enter up to 99 characters: ";
	cin.getline(cstring, 100);

	size = strlen(cstring); //string size

	for (i = 0; i < size; i++) //lowercase
	{
		cstring[i]=tolower(cstring[i]);
	}

/*	  for	 = 0; i < size; i++)//  Just to check for tolower
	{
		cout << cstring[i];
	}

	numvowels = vowels(cstring, size);
	numcons = consonants(cstring, size);
*/

	while ((input != 'E') || (input != 'e'))
	{

		size = strlen(cstring); //string size

			for (i = 0; i < size; i++) //lowercase
			{
				cstring[i]=tolower(cstring[i]);
			}

		numvowels = vowels(cstring, size);
		numcons = consonants(cstring, size);

		cout << "\nWhat would you like to do with the string you entered?: \n";
		cout << "A) Count the number of vowels in the string.\n";
		cout << "B) Count the number of consonants in the string.\n";
		cout << "C) Count both vowels and consonants in the string.\n";
		cout << "D) Enter another string.\n";
		cout << "E) Exit the program.\n";
		cin >> input;


		if ((input == 'A') || (input  == 'a'))
		{
			cout<<"There are "<< numvowels <<" vowels in the string.\n";
		}

			else if ((input == 'B') || (input  == 'b'))
			{
				cout<<"There are "<< numcons <<" consonants in the string.\n";
			}

				else if ((input == 'C') || (input  == 'c'))
				{
					cout<<"There are "<< numcons <<" consonants and " << numvowels <<" vowels in the string.\n";
				}
					else if ((input == 'E') || (input  == 'e'))
					{
						return 0;
					}

						else if ((input == 'D') || (input  == 'd'))
						{
						    cin.ignore();
							numvowels = 0;
							numcons = 0;
							cout << "Please enter up to 99 characters: ";
							cin.getline(cstring, 100);

						}

	}

return 0;
}

int vowels(char *cstring, int size)
{
	int i, totalv = 0;

	for (i = 0; i <= size; i++)
	{
		if ((cstring[i] == 'a') || (cstring[i] == 'e') || (cstring[i] == 'i') || (cstring[i] == 'o') || (cstring[i] == 'u'))
		totalv ++;
	}

	return totalv;
}

int consonants(char *cstring, int size)
{
	int i, totalc = 0;

		for (i = 0; i <= size; i++)
	{
		if ((cstring[i] != 'a') && (cstring[i] != 'e') && (cstring[i] != 'i') && (cstring[i] != 'o') && (cstring[i] != 'u') && (cstring[i] != ' ') && (cstring[i] != '\0') )
		{
			totalc++;
		}
	}

	return totalc;
}

