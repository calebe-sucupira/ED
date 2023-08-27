#include <iostream>
#include "pilha.h"
using namespace std;

int main(){
    pilha p;
    int n;
    int rest;
    cout << "Digite o número a ser convertido em binário: ";
    cin >> n;
    while(n != 0){
        rest = n % 2;
        p.push(rest);
        n = n / 2;
    }
    cout << endl;
    while(!p.empty()){
        cout << p.pop();
    }
    
}