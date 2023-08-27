#include <iostream>
#include "pilha.h"

using namespace std;


pilha::pilha(){
    _top = nullptr;
    _size = 0;
}

pilha::~pilha(){
    while(_top!= nullptr){
        node* temp = _top;
        _top = _top->next;
        delete temp;
    }
}

void pilha::push(int k){
    node* newnode = new node(k, nullptr);
    newnode->next = _top;
    _top = newnode;
    _size++;
}

int pilha::pop(){
    if(_top == nullptr){
        exit(1);
    }
    node* temp = _top;
    int temp2 = _top->value;
    _top = _top->next;
    delete temp;
    return temp2;
    _size--;
}

int pilha::top(){
    return _top->value;
}

bool pilha::empty(){
    return _top == nullptr;
}

int pilha::size(){
    return _size;
}

int *pilha::n_pop(int n){
    int *vec = new int[n];
    if(_top == nullptr){
        exit(1);
    }
    if(n > _size){
        return nullptr;
    }
    for(int i = 0; i < n; i++){
        node* temp = _top;
        int temp2 = _top->value;
        vec[i] = temp2;
        _top = _top->next;
        delete temp;
        _size--;
    }

    return vec;
}