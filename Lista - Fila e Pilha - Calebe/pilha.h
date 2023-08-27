#ifndef PILHA_H
#define PILHA_H
#include "node.h"

class pilha{
    private:
        node* _top;
        int _size;
    public:
        pilha();
        ~pilha();
        void push(int k);
        int pop();
        int top();
        int size();
        bool empty();
        int* n_pop(int n);
};



#endif