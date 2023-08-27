#include <iostream>
#include "fila.h"
#include "node.h"

fila::fila(){
    _start = nullptr;
    _end = nullptr;
    _size = 0;
}

fila::~fila(){
    while(_start != nullptr){
        node* temp = _start;
        _start = _start->next;
        delete temp;
    }
}

bool fila::empty(){
    return _start == nullptr;
}

void fila::insert(const int& k){
    node* newnode = new node(k, nullptr);
    if(_end != nullptr){
        _end->next = newnode;
    }else{
        _start = newnode;
    }
    _end = newnode;
    _size++;
}

int fila::remove(){
    if(empty()){
        exit(1);
    }

    node* temp = _start;
    _start = _start->next;

    if(_start == nullptr){
        _end = nullptr;
    }

    int temp2 = temp->value;
    delete temp;
    return temp2;
    _size--;
}

void fila::removeElem(){
    if(empty()){
        exit(1);
    }

    node* temp = _start;
    _start = _start->next;

    if(_start == nullptr){
        _end = nullptr;
    }

    delete temp;
    _size--;
}

int fila::size(){
    return _size;
}

int fila::back(){
    return _end->value;
}