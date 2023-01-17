/*
    Bernadette Slack - CS250 - Program 2 - Binary Search Tree
    Due 4/21/20
        Program requirements - Design and application to act as a BST for a library.
        The program should have the following menu:
            1)Create, 2)Add, 3)Delete, 4)Modify 5)Traverse in order, 6)Traverse in preorder
            7)Traverse in postorder.

*/


#include <iostream>

using namespace std;

int main()
{
    int ctrl;

    cout << "\t\t\t\t\tWelcome to the library!\n\n" << endl;

    do
    {
            cout << "1) Create new directory \n2) Add entry to directory \n3) Delete entry from directory\n";
            cout << "4) Modify an existing entry \n5) Traverse in order - display directory in alphabetical order\n";
            cout << "6) Traverse in preorder - display from root left right\n";
            cout << "7) Traverse in postorder - display left to root \n8) Exit\n\n";

            cout << "Please make a selection: ";
            cin >> ctrl;

            if (ctrl == 1) // Create new BST path
            {
                cout << "Create a new BST\n\n";
            }
                if (ctrl == 2) // Add a book path
                {
                    cout << "Add a new entry\n\n";
                }
                    if (ctrl == 3) // Delete a book path
                    {
                        cout << "Delete an entry\n\n";
                    }
                        if (ctrl == 4) // Modify an existing book path
                        {
                            cout << "Modify existing entry\n\n";
                        }
                            if (ctrl == 5) // In order traversal path
                            {
                                cout << "In order\n\n";
                            }
                                if (ctrl == 6) // Preorder traversal path
                                {
                                    cout << "Preorder\n\n";
                                }
                                    if (ctrl == 7) // Postorder traversal path
                                    {
                                        cout << "Postorder Traversal\n\n";
                                    }
                                        if (ctrl == 8) // Exit
                                        {
                                            cout << "Exit\n";
                                        }

    }while (ctrl != 8);

    return 0;
}
