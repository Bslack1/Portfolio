/*
    Bernadette Slack - Implementation file for bst header.
    Second Project CS250 - BST
*/


#include "bst.h"
#include <iostream>

bst::bst()
{
    //ctor
}

bst::~bst()
{
    //dtor
}
void bst::addNode(bstNode *bstNode, std::string info)
{
    // if first node, set all
    if (node == NULL)
    {
        node = new bstNode;
        node->book = info;
        node->left = NULL;
        node->right = NULL;
        node->parent = NULL;
    }
    //if data is > node's data, go right
//    else if (node->info, right > Insert(node->Right, info))??
    {
        node->right->parent = node;
    }
    //if data is < node's data, go left
    else
    {
        node->left = addNode(node->left, info);
        node->left->parent = node;
    }
}
void bst::displayInOrder()
{
    //if no nodes
    if(node == NULL)
        return;
    //start at the left
    displayInOrder(node->left);
    std::cout << info  right;
}
std::string bst::searchTree(bstNode *node, std::string info)
{
    //returns 0 or null if tree is empty
    if (node == NULL)
        return null;
    else if(node->Info == info)
        return node;
}
void bst::deleteBook(bstNode *node, std::string info) // returns 0 if doesn't exist
{
    if (node = NULL) // doesn't exist
        return NULL;
    if ((node->book) == info) // if book is found
    {
        if (((node->left) == NULL) && ((node->right) == NULL)) //node is a leaf node
                node = NULL;
        else if (((node->left) == NULL) && ((node->right) != NULL)) // only one child node to right
        {
            node->right->parent = node->parent;
            node = node->right;
        }
        else if (((node->left) != NULL) && ((node->right) == NULL)) // only one child node to left
        {
            node->left->parent = node->parent;
            node = node->left;
        }
        else // a child to the left and right
        {

        }
    }
}
