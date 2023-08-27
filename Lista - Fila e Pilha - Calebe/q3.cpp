#include <iostream>
#include "fila.h"

using namespace std;

bool equals(fila* fila1, fila* fila2){
    bool equal;
    if(fila1->size() != fila2->size()){
        equal= false;
    }else{
        int temp, temp2;
        while(!fila1->empty()){
            temp = fila1->remove();
            temp2 = fila2->remove();
            if(temp != temp2){
                equal = false;
                break;
            }else{
                equal = true;
            }
        }
    }
    return equal;
}
int main(){
    fila fila1, fila2;
    
    fila1.insert(1);
    fila1.insert(2);
    fila1.insert(3);

    fila2.insert(4);
    fila2.insert(5);
    fila2.insert(6);
    
    cout << equals(&fila1, &fila2) << endl;
}
