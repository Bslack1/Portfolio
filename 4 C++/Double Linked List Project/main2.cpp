/*
    Bernadette Slack - CS250 Project 1
    Double Linked List portion header file.
*/

#include <iostream>
#include"doubleLL.h"

using namespace std;

int main()
{

    int i, ctrl, loc;
    string input, lookfor;
    doubleLL LinkedList; // new object - instance of doubleLL

    do
    {
        cout << "\nPlease choose from the following options:\n";
        cout << "1)Create\n2)Insert\n3)Delete\n4)Append\n5)Search\n6)Quit\n";
        cin >> ctrl;

        if (ctrl == 1)//create new node option
        {
            cout << "Do you want to place your node at the head(1) or tail(2): ";
            cin >> loc;
            if (loc == 1)//head option
            {
                cout << "Please enter data for node: ";
                cin >> input;
                LinkedList.addToHead(input);
                LinkedList.display();
                cout << endl;
            }
                if (loc == 2)//tail option
                {
                    cout << "Please enter data for node: ";
                    cin >> input;
                    LinkedList.addToTail(input);
                    LinkedList.display();
                    cout << endl;
                }
                    if ((loc != 1) && (loc != 2))
                    {
                        cout << "\nInvalid position, try again: ";
                        cin >> loc;
                        if (loc == 1)//head option
                        {
                            cout << "Please enter data for node: ";
                            cin >> input;
                            LinkedList.addToHead(input);
                            LinkedList.display();
                            cout << endl;
                        }
                            if (loc == 2)//tail option
                            {
                                cout << "Please enter data for node: ";
                                cin >> input;
                                LinkedList.addToTail(input);
                                LinkedList.display();
                                cout << endl;
                            }
                    }

        }
            if (ctrl == 2)//insert node option
            {
                cout << "\nPlease enter location for node insertion (0-7):";
                cin >> loc;
                    if ((loc < 0) || (loc > 7))
                    {
                        cout << "\nInvalid position, try again: ";
                        cin >> loc;}
                        cout << "\nPlease enter data for node: ";
                        cin >> input;
                        LinkedList.insNode(loc, input);
                        LinkedList.display();
                        cout << endl;
            }
                if (ctrl == 3)//delete node option
                {
                    cout << "\nPlease input the node you wish to delete: ";
                    cin >> input;
                    LinkedList.deleteNode(input);
                    LinkedList.display();
                    cout << endl;
                }
                    if (ctrl == 4)//append node option
                    {
                        cout << "\nPlease enter data to append to linked list: ";
                        cin >> input;
                        LinkedList.addToTail(input);
                        LinkedList.display();
                        cout << endl;
                    }
                        if (ctrl == 5)//search node option
                        {
                            cout << "\nPlease enter the info you would like to search for: ";
                            cin >> input;
                            LinkedList.seekReturn(input);
                            cout << endl;
                            LinkedList.display();
                            cout << endl;
                        }
                            if (ctrl == 6)
                            { break; }
    }while (ctrl < 6);

    return 0;
}
