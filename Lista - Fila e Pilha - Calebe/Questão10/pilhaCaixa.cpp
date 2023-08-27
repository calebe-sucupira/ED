#include <iostream>
#include <string>
#include "pilhaCaixa.h"
#include "caixa.h"
using namespace std;

pilhaCaixa::pilhaCaixa(){
    pilha = new caixa[100];
    _size = 100;
    top = 0;
}
pilhaCaixa::~pilhaCaixa(){
    delete[] pilha;
}
 
int pilhaCaixa::vazia(){
    return top == 0; 
}
int pilhaCaixa::cheia(){
    return top == _size;
}

void pilhaCaixa::empilhar(caixa nova){
    if(cheia()){
        cout << "ERRO. Pilha cheia." << endl;
    }
    else{
       top++;
       pilha[top] = nova;
    }
}

void pilhaCaixa::desempilhar(){
   if (vazia()) {
    cout << "ERRO. Pilha vazia" << endl;
  }
  else{
    top--;
  }
}

caixa pilhaCaixa::topo() {
    if(vazia()){
        cout << "ERRO. Pilha vazia" << endl;
        return caixa();
    }
    else{
        return pilha[top];
    }
}


