#ifndef LISTENC_H
#define LISTENC_H
#include "node.h"

class ListEnc{
    private:
        int size = 0;
        node* head = nullptr;
    public:
        ListEnc(int v[], int n);
        ListEnc(const ListEnc& list);
        bool equals(const ListEnc& lst);
        void concat(ListEnc& lst);
        void reverse();
        void print();
        void aux_reverse(node* _head);
};
#endif