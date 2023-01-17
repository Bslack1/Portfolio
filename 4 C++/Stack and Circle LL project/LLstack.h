/*
    Bernadette Slack - CS250 - Mock Double LL stack implementation.
*/

#ifndef LLSTACK_H
#define LLSTACK_H

class node
{
        public:
        int info;
        node *next, *prev;
        node()// def constructor
        {next = prev = 0;}
        node(int data, node *nptr = 0, node *pptr = 0) // constructor
        {
            info = data;
            next = nptr;
            prev = pptr;
        }
};

class LLstack
{
    public:
        LLstack() //1 constructor
        {top = bottom = 0;}
        ~LLstack() //2 destructor
        {
            for (node *p; !isEmpty(); )
            {
                p = top->next;
                delete top;
                top = p;
            }
        }
        int* operator=(const &right)
        {
            if(this != &right)
            {
                if (!right.top)
                    top = 0;
                else
                {
                    top = new node(data, next, prev);
                    top->data = right.top-data;
                    *q = right.top->next;
                    *q = top;
                    while (q)
                    {
                        p->next = new node();
                        p->next->data = q->item;
                        p = p->next;
                        q = q->next;
                    }
                    p->next = 0;
                }
            }
            return *this;
        }
        int isEmpty()
        { return top == 0; }
        void push(int data) // adds nodes to the front/top/head of linked list
        {
            top = new node(data, top);
            if (bottom == 0)
                bottom = top;
        }
        void pop()
        {
            data = top->info;
            if (top == bottom) //checks if only one node
            {
                delete top;
                top = bottom = 0;
            }
                else
                {
                    top = top->next;
                    delete top->prev;
                    top->prev=0;
                }
            return data;
        }
        int topandPop(int *top)
        {
            if(isEmpty())
            {
                std::cout << "Stack is empty, nothing to pop.";
            }
                else
                {
                   stackTop = top->info;
                   *tmp = top;
                   top = top->next;
                   delete tmp;
                }
        }

    private:
        node *top, *bottom, *curr, *tmp;
};

#endif // LLSTACK_H
