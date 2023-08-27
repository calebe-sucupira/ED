#include <iostream>
#include "pilha.h"
using namespace std;

bool primo(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void fatora(int n, pilha* p){
    int count = 2;
    while(n != 1){
        if(primo(count)){
            while(n % count == 0){
                n = n / count;
                p->push(count);
            }
        }
        count++;

    }
    
}
// Utilizei a pilha, porque ja como a pilha funciona em que o ultimo 
//elemento adicionado é o primeiro que sai e para fatorar um numero é sempre 
//utilizando os menores primos possiveis, então os menores elementos fica no final da pilha
//e os maiores fica mais no topo, assim basta apenas imprimir os elementos da pilha
// que ja imprimi em ordem decresente.
int main(){
    pilha p;
    int n;
    cout << "Digite o número para ser fatorado: ";
    cin >> n;
    fatora(n, &p);

    while (!p.empty()){
        cout << p.pop() << " * ";
    }
    
}