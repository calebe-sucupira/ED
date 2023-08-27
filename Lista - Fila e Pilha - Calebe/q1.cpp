#include <iostream>
#include "pilha.h"
using namespace std;

int main(){
    pilha pilha1;
    pilha pilha2;

    int nPilha1;
    cout << "Digite o tamanho da pilha1: ";
    cin >> nPilha1;
    while(1){
        if(nPilha1 > 50){
            cout << "ERRO. O máximo de uma pilha é 50!" << endl;
            cout << "Digite o tamanho da pilha1: ";
            cin >> nPilha1;
        }
        else{
            break;
        }
    
    }
    int nPilha2;
    cout << "Digite o tamanho da pilha2: ";
    cin >> nPilha2;
    while(1){
        if(nPilha2 > 50 || (nPilha1 + nPilha2) > 80){
            cout << "ERRO. As duas pilhas juntas terá mais de 80 elementos" << endl;
            cout << "Digite o tamanho da pilha2: ";
            cin >> nPilha2;
        }
        else{
            break;
        }
    
    }
    int tam = nPilha1 + nPilha2;

    int vec[tam];
    int i = 0;
    for(i = 0; i < nPilha1; i++){
        pilha1.push(i+1);
    }

    for(int j = i; j < tam; j++){
        pilha2.push(j+1);
    }
    int k = 0;
    for(k = 0; k < nPilha1; k++){
        vec[k] = pilha1.pop();
    }
    for(int l = k; l < tam; l++){
        vec[l] = pilha2.pop();
    }

    for(int m = 0; m < tam; m++){
        cout << vec[m] << ", ";
    }
    
}