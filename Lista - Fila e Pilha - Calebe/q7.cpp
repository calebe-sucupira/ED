#include <iostream>
#include "pilha.h"
using namespace std;
void _copy(pilha* p, pilha* pCopy){
   
    pilha temp; 
    while(!p->empty()){
        temp.push(p->pop());
    }

    while(!temp.empty()){
        int temp2 = temp.pop();
        pCopy->push(temp2);
        p->push(temp2);
    }
}

int main(){
    pilha p;
    pilha pCopy;
    p.push(5);
    p.push(4);
    p.push(6);

    _copy(&p, &pCopy);
    cout << "Pilha: " << endl;
    while(!p.empty()){
        cout << p.pop() << ", ";
    }
    cout << endl;
    cout << "Pilha copiada" << endl;
    while(!pCopy.empty()){
        cout << pCopy.pop() << ", ";
    }

}


