#include <iostream>
#include "dlistenc.h"
using namespace std;

DlistEnc::DlistEnc(){
	size = 0;
	head = nullptr;
}
DlistEnc::~DlistEnc(){
	clear();
	cout << "Lista Destruida!" << endl;
}
void DlistEnc::clear(){
	while(head != nullptr){
		Node* aux = head;
		head = head->next;
		delete aux;
	}
	size = 0;
}

void DlistEnc::add(int key){
	if(head == nullptr){
		Node* novo = new Node(key, nullptr, nullptr);
		head = novo;
	}
	else{
		Node* aux = head;
		while(aux->next != nullptr){
			aux = aux->next;
		}
		Node* novo = new Node(key, nullptr, aux);
		aux->next = novo;
	}
	size++;
}

void DlistEnc::remove(){
	Node* aux = head;
	Node* aux2;
	while(aux->next != nullptr){
		aux = aux->next;
	}
	aux2 = aux->back;
	aux2->next = nullptr;
	delete aux;
	size--;
}
bool DlistEnc::search(int n){
	Node* aux = head;
	bool encontrou = false;
	while(aux->next != nullptr){
		if(aux->value == n){
			encontrou = true;
			break;
		}
		aux = aux->next;
	}
	return encontrou;
}
int DlistEnc::_size(){
	return size;
}

void DlistEnc::print(){
	if(head == nullptr){
		cout << "Lista vazia!" << endl;
	}
	Node* aux = head;
	cout << "[";
	while(aux != nullptr){
		cout << aux->value << ",";
		aux = aux->next;
	}
	cout << "]" << endl;
}

void DlistEnc::juntar(DlistEnc& l){  
    if(l.head->back == nullptr && l.head->next == nullptr){
        return;
    }
    else if(head->back == nullptr && head->next == nullptr){
        head = l.head;
    }
	Node* aux = head;
    while(aux->next != nullptr){
        aux = aux->next;
    }
    aux->next = l.head;
	aux->next->back = aux;
	l.head = nullptr;
	size += l._size();
}


