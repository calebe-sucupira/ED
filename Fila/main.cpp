#include <iostream>
#include "Queue.h"
using namespace std;

void combina_filas(Queue *f_res, Queue *f1, Queue *f2){
    if(f1->empty() && f2->empty()){
        cout << "listas vazias";
    }

    else if(f1->empty()){
        while(!f2->empty()){
            int aux = f2->front();
            f2->pop_front();
            f_res->push_back(aux);
        }
    }
    else if(f2->empty()){
        while(!f1->empty()){
            int aux = f1->front();
            f1->pop_front();
            f_res->push_back(aux);
        }
    }else{

        while(f1->empty() != true && f2->empty() != true){
            int aux1 = f1->front();
            int aux2 = f2->front();
            f1->pop_front();
            f2->pop_front();
            f_res->push_back(aux1);
            f_res->push_back(aux2);
        }

        while(f1->empty() != true){
            int aux = f1->front();
            f1->pop_front();
            f_res->push_back(aux);
        }

         while(f2->empty() != true){
            int aux = f2->front();
            f2->pop_front();
            f_res->push_back(aux);
        }
    }
}


int main() {
    Queue fila(8);

    fila.push_back(-1);
    fila.push_back(2);
    fila.push_back(-3);
    fila.push_back(4);
    fila.push_back(-5);
    fila.push_back(6);
    fila.push_back(-7);
    fila.push_back(8);
 

    int tam = fila.size();
    //remove negativos
    for(int i = 0; i < tam; i++){
        int aux = fila.front();
        fila.pop_front();
        if(aux > 0)
            fila.push_back(aux);
        
    }
    
    Queue fila1(3);
    fila1.push_back(11);
    fila1.push_back(13);
    fila1.push_back(15);


    int capacidade = fila.size() + fila1.size();

    Queue fila2(capacidade);

    combina_filas(&fila2, &fila, &fila1);
   
    while (!fila2.empty()) { 
        cout << fila2.front() << endl;
        fila2.pop_front();
    }



}
