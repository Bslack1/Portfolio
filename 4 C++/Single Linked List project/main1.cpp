/*
    Bernadette Slack - CS250 Project 1
    Single Linked List portion main program.
*/

#include <iostream>
#include"SingleLL.h"

using namespace std;

int main()
{

    int i, ctrl, loc, opt;
    string input, lookfor;
    SingleLL LinkedList; // new object - instance of SingleLL

    do
    {
        cout << "\nPlease choose from the following options:\n";
        cout << "1)Create\n2)Insert\n3)Delete\n4)Append\n5)Search\n6)Quit\n";
        cin >> ctrl;

        if (ctrl == 1)//create new node option
        {
            cout << "Do you want to create the node at the head(1) or tail(2)? Please choose 1, 2: ";
            cin >> opt;
            if (opt == 1)
            {
                cout << "\nPlease enter data for node creation: ";
                cin >> input;
                LinkedList.addToHead(input);
                LinkedList.display();
                cout << endl;
            }
                if (opt == 2)
                {
                    cout << "\nPlease enter data for node creation: ";
                    cin >> input;
                    LinkedList.addToTail(input);
                    LinkedList.display();
                    cout << endl;
                }
                    if ((opt != 1) && (opt != 2))
                    {
                        cout << "That is not a valid option.";
                        break;
                    }

        }
            if (ctrl == 2)//insert node option
            {
                cout << "\nPlease enter location for node insertion (0-9):";
                cin >> loc;
                    if ((loc < 0) || (loc > 9))
                    {cout << "\nInvalid position, try again: ";
                     cin >> loc;}
                cout << "\nPlease enter data for node: ";
                cin >> input;
                LinkedList.insNode(loc, input);
                LinkedList.display();
            }
                if (ctrl == 3)//delete node option
                {
                    cout << "\nPlease input the node you wish to delete: ";
                    cin >> input;
                    LinkedList.deleteNode(input);
                    LinkedList.display();
                }
                    if (ctrl == 4)//append node option
                    {
                        cout << "\nPlease enter data to append to linked list: ";
                        cin >> input;
                        LinkedList.addToTail(input);
                        LinkedList.display();
                    }
                        if (ctrl == 5)//search node option
                        {
                            cout << "\nPlease enter the info you would like to search for: ";
                            cin >> input;
                            LinkedList.seekReturn(input);
                            cout << endl;
                            LinkedList.display();
                        }
                            if (ctrl == 6)
                            { break; }
    }while (ctrl < 6);

    return 0;
}
