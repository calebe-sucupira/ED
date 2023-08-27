#ifndef NODE_H
#define NODE_H

struct node{
    int value;
    node *next;

    node(const int& _value, node *nextnode){
        value = _value;
        next = nextnode;
    }
};

#endif