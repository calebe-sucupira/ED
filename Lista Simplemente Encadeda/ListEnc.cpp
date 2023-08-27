#include <iostream>
#include "ListEnc.h"
#include "node.h"
using namespace std;

ListEnc::ListEnc(int v[], int n){
    for(int i = 0; i < n; i++){
        node* novo = new node(v[i], nullptr);
    if(head == nullptr){
        head = novo;
    }else{
        node* aux = head;
        while(aux->prox != nullptr){
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    size++;
    }
}

ListEnc::ListEnc(const ListEnc& list){
    size = list.size;
    if(list.head == nullptr){
        head = nullptr;
    }else{
        head = new node(list.head->valor, nullptr);
        node* aux = list.head->prox;
        node* ant = head;
        while(aux!= nullptr){
            node* novo = new node(aux->valor, nullptr);
            ant->prox = novo;
            ant = novo;
            aux = aux->prox;
            
        }
    }
}

bool ListEnc::equals(const ListEnc& lst){
    bool iguais = true;
    if(size != lst.size){
        iguais = false;
    }else{
        node* aux = head;
        node* l = lst.head;
        while(aux != nullptr && iguais == true){
            if(aux->valor != l->valor){
                iguais = false;
            }
            aux = aux->prox;
            l = l->prox;
        }
    }
    return iguais;
}

void ListEnc::concat(ListEnc& lst){
    if(lst.head == nullptr){
        return;
    }
    else if(head == nullptr){
        head = lst.head;
    }

    node* aux = head;
    while(aux->prox != nullptr){
        aux = aux->prox;
    }
    aux->prox = lst.head;
    lst.head = nullptr;
}

void ListEnc::reverse(){
    if(head == nullptr ){
        cout << " A lista está vazia" << endl;
    }else{
        cout << "[ ";
        aux_reverse(head);
        cout << " ]" << endl;
    }
    
}

void ListEnc::print(){
    if(head == nullptr ){
    cout << " A lista está vazia" << endl;
    }
    node* aux = head;
    cout << "[ ";
    while(aux != nullptr){
        cout << aux->valor << ", ";
        aux = aux->prox;
    }
    cout << " ]" << endl;

}

void ListEnc::aux_reverse(node* _head){
    node* aux;
    if(_head == nullptr){
        return;
    }else{
        aux = _head->prox;
        aux_reverse(aux);
        cout << _head->valor << ", ";
    }
}

