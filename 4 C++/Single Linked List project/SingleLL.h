/*
    Bernadette Slack - CS250 Project 1
    Single Linked List portion header file.
*/


#ifndef SINGLELL_H
#define SINGLELL_H
#include<iostream>
#include<string>

class SingleLLNode //class for holding actual nodes
{
    public:
        std::string info;
        SingleLLNode *next;
        SingleLLNode()// def constructor
        {
            next = 0;
        }
        SingleLLNode (std::string el, SingleLLNode *ptr = 0) // constructor
        {
            info = el;
            next = ptr;
        }

};

class SingleLL //class that implements node functions
{
    public:
        SingleLL() //def constructor
        {
            head = tail = 0;
        }
        ~SingleLL() //destructor
        {
            for (SingleLLNode *p; !isEmpty(); )
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
            head = new SingleLLNode(el, head);
            if (tail == 0)
                tail = head;
        }
        void addToTail(std::string el) // adds nodes to the end-tail of the linked list
        {
            if (tail != 0)
            {
                tail->next = new SingleLLNode(el);
                tail = tail->next;
            }
            else head = tail = new SingleLLNode(el);
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
                    SingleLLNode *tmp = head;
                    head = head->next;
                    delete tmp;
                }
                else
                {
                    SingleLLNode *pred, *tmp;
                    for (pred = head, tmp = head->next; tmp != 0 && !(tmp->info == el); pred = pred->next, tmp = tmp->next);
                    if (tmp != 0)
                    {
                        pred->next = tmp->next;
                        if (tmp == tail)
                            tail = pred;
                        delete tmp;
                    }
                }
        }
        void display() // prints list in order
        {
            SingleLLNode *tmp = new SingleLLNode;
            tmp = head;
            while (tmp != 0)
            {
                std::cout << tmp->info << " ";
                tmp = tmp->next;
            }
        }
        std::string seekReturn(std::string el)
        {
            SingleLLNode *curr = head;
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
            SingleLLNode *prev = new SingleLLNode();
            SingleLLNode *curr = new SingleLLNode();
            SingleLLNode *newNode = new SingleLLNode();

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
        SingleLLNode *head, *tail, *curr, *tmp;
};

#endif // SINGLELL_H
