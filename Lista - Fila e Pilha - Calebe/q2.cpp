#include <iostream>
#include "fila.h"
using namespace std;

int main(){
    fila f;

    f.insert(2);
    f.insert(4);
    f.insert(6);
    f.removeElem();
    cout << f.size() << endl;

    while (!f.empty()){
       cout << f.remove() << " ";
    }

}