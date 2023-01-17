/*
    Bernadette Slack - CS250 - Second Project - header file for BST.
*/



#ifndef BST_H
#define BST_H

#include <iostream>
#include <string.h>

template <class T>
class Node // parent properties to track each node
{
    public:
        bstNode(); // def constructor
        virtual ~bstNode(); // destructor

    protected:

    private:
        std::string book; // element or data of note
        bstNode *left;
        bstNode *right;
        bstNode *parent;
};

class bst
{
    public:
        bst(); // constructor
        virtual ~bst(); // destructor

        void addNode(std::string info); // should this be returning a value???
        std::string searchTree(std::string input);
        void deleteBook(std::string info);
        void modifyBook(std::string info);
        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();

    private:
        std::string info;
};

#endif // BST_H
