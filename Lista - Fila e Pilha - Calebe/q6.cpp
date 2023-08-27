#include <iostream>
#include "pilha.h"
using namespace std;

int main(){
    pilha p;
    int n_pilha;
    int n;
    cout << "Digite a quantidade de elementos que você que adiconar na pilha: ";
    cin >> n_pilha;
    for(int i = 0; i < n_pilha; i++){
        p.push(i+1);
    }
    cout << endl;
    
    cout <<"Digite a quantidade de elementos que deseja remover da pilha: ";
    cin >> n;
    int *excluidos = p.n_pop(n);

    if(excluidos == nullptr){
        cout << "ERRO. O número de elementos que você quer excluir é maior do que o tamanho da pilha!" << endl;
    }
    else{
        for(int i = 0; i < n; i++){
        cout << excluidos[i] << ", ";
        }
    }
    
}