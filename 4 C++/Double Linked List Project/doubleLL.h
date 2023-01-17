/*
    Bernadette Slack - CS250 Project 1
    Double Linked List portion header file.
*/

#ifndef DOUBLELL_H
#define DOUBLELL_H
#include<iostream>
#include<string.h>

class DLLNode //class for holding actual nodes
{
    public:
        std::string info;
        DLLNode *next, *prev;
        DLLNode()// def constructor
        {next = prev = 0;}
        DLLNode(std::string el, DLLNode *nptr = 0, DLLNode *pptr = 0) // constructor
        {
            info = el;
            next = nptr;
            prev = pptr;
        }

};

class doubleLL
{
    public:
        doubleLL() {head = tail = 0;}//default constructor
        ~doubleLL() //destructor
        {
            for (DLLNode *p; !isEmpty(); )
            {
                p = head->next;
                delete head;
                head = p;
            }
        }
        int isEmpty()
        { return head == 0; }
        void addToHead(std::string el) // adds nodes to the front-head of linked list
        {
            head = new DLLNode(el, head);
            if (tail == 0)
                tail = head;
        }
        void addToTail(std::string el) // adds nodes to the end-tail of the linked list
        {
            if (tail != 0)
            {
                tail = new DLLNode(el, 0, tail);
                tail->prev->next = tail;
            }
            else head = tail = new DLLNode(el);
        }
        void deleteNode(std::string el)
        {
            if (head != 0) // makes sure list is not empty
                if (head == tail && el == head ->info)
                {
                    delete head;
                    head = tail = 0;
                }
                else if (el == head->info)
                {
                    DLLNode *tmp = head;
                    head = head->next;
                    delete tmp;
                }
                else
                {
                    DLLNode *prev, *tmp;
                    for (prev = head, tmp = head->next; tmp != 0 && !(tmp->info == el); prev = prev->next, tmp = tmp->next);
                    if (tmp != 0)
                    {
                        prev->next = tmp->next;
                        if (tmp == tail)
                            tail = prev;
                        delete tmp;
                    }
                }
        }
        void display() // prints list in order
        {
            DLLNode *tmp = new DLLNode;
            tmp = head;
            while (tmp != 0)
            {
                std::cout << tmp->info << " ";
                tmp = tmp->next;
            }
        }
        std::string seekReturn(std::string el)
        {
            DLLNode *curr = head;
            int i = 0;
            while(curr != 0)
            {
                if (i == 10)
                    return (curr->info);
                i++;
                curr = curr->next;
            }
            std::cout << "\nThe address of the node is " << &curr;
        }
        void insNode(int pos, std::string el)
        {
            DLLNode *prev = new DLLNode();
            DLLNode *curr = new DLLNode();
            DLLNode *newNode = new DLLNode();

            newNode->info = el;

            int tmpPos = 0; // index var

            curr = head;

            if (head != 0)
            {
                while (curr->next != 0 && tmpPos != pos)
                {
                    prev = curr;
                    curr = curr->next;
                    tmpPos++;
                }

                prev->next = newNode;
                newNode->next = curr;
                std::cout << "Node added at position " << pos << ".\n";
            }

        }


    private:
        DLLNode *head, *tail, *curr, *tmp;

};

#endif // DOUBLELL_H
