#ifndef FILA_H
#define FILA_H
#include "node.h"

class fila{
    private:
        node* _start;
        node* _end;
        int _size;
    public:
        fila();
        ~fila();
        bool empty();
        void insert(const int& k);
        int remove();
        void removeElem();
        int size();
        int back();

};

#endif