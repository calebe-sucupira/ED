#include <iostream>
#include "cirdlistenc.h"
using namespace std;

struct Node{
    int value;  
    Node* next; 
    Node* back; 
};

CirDlistEnc::CirDlistEnc(){
    head = new Node;
    head->value = 0;
    head->next = head;
    head->back = head;
}
         
CirDlistEnc::~CirDlistEnc(){
    Node* aux = head->next;
    Node* dell = aux;
    while(aux != head){
        aux = aux->next; 
        delete dell;    
        dell = aux;     
    }
    delete head;
    cout<< "Lista Destruida!" << endl;;
}


bool CirDlistEnc::isEmpty(){
    return head->next == head;
} 

void CirDlistEnc::add(int key){
   Node* novo = new Node;
    Node* aux = head->back;
    if(isEmpty()){ 
        novo->value = key;      
        novo->back = head;     
        novo->next = head;     
        head->next = novo;     
        head->back = novo;     
    }else{
        novo->value = key;      
        novo->next = head;     
        novo->back = aux;       
        aux->next = novo;
        head->back = novo;     
    }
    size++;       
}       
      
void CirDlistEnc::remove(){      
    if(!isEmpty()){
        Node* aux = head->back;    
        int k = aux->value;

        head->back = aux->back;   
        aux->next = nullptr;
        aux->back = nullptr;
        delete aux;

        aux = head->back;
        aux->next = head;
        
        size--;
    }else{
        cout << "<< A lista está vazia!" << endl;
    }

}
                    
void CirDlistEnc::print(){
   if(isEmpty()){
        cout << "Lista Vazia!" << endl;
    }else{
        Node* aux = head->next;
        std::cout << "[";
        while(aux != head){
            cout<< aux->value <<", ";
            aux = aux->next;
        }std::cout << "]" << endl;
        
    }
}
            
int CirDlistEnc::_size(){
    return size;
    
}                         

bool CirDlistEnc::search(int n){
   Node* aux = head->next;
	bool encontrou = false;
	while(aux != head){
		if(aux->value == n){
			encontrou = true;
			break;
		}
		aux = aux->next;
	}
	return encontrou;
}
