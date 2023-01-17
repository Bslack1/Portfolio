/*
    Bernadette Slack CS 250
    Mock implementation of a Queue using a circular linked list.
*/

#ifndef CIRCLELLQUEUE_H
#define CIRCLELLQUEUE_H

class node
{
    public:
        int info;
        node *next;
        node()// def constructor
        {next = 0;}
        node(int data, node *nptr = 0) // constructor
        {
            info = data;
            next = nptr;
        }
};

class circleLLQueue
{
    private:
        node *tail, *curr, *tmp;
        int MAX = 10;
    public:
        circleLLQueue()// def constructor
        {
            tail = 0;
        }
        ~circleLLQueue(node *p; !isEmpty();)
        {
            p = tail->next;
            delete tail;
            tail = p;
        }
        bool isEmpty()
        {
            return tail == 0;
        }
        void enqueue(int info)// adds to tail
        {
            if (tail != 0)
            {
                tail->next = new node(info);
                tail = tail->next;
            }
            else tail = new node(info);
        }
        void dequeue()//deletes front of queue
        {
            if(isEmpty())
            {
                std::cout << "Queue is empty, nothing to return.";
            }
            else
            {
                curr = tail->next;
                curr->next = 0;
            }
        }
        int getFront()//returns front of queue
        {
            curr = tail->next->info;
            int val = curr;
            return val;
        }


};

#endif // CIRCLELLQUEUE_H
