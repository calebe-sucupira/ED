#include <iostream>
#include "pilha.h"
#include "fila.h"
using namespace std;

int main(){
    pilha p;

    fila f;
    f.insert(5);
    f.insert(9);
    f.insert(1);

    fila temp;
    while(!f.empty()){
        temp.insert(f.remove());
    }

    while(!temp.empty()){
        p.push(temp.remove());
    }

    while(!p.empty()){
        f.insert(p.pop());
    }

    while(!f.empty()){
        cout << f.remove() << " ";
    }
    
    
}