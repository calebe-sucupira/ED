#include <iostream>
#include "listSeq.h"
using namespace std;

ListSeq::ListSeq(int capacity){
    cout << "LisSeq Criada" << endl;
    _capacity = capacity;
    cout << "Capacidade " << _capacity << endl;
    _vec = new int[_capacity];
}    
ListSeq::ListSeq(){
    cout << "LisSeq Criada" << endl;
    cout << "Capacidade " <<_capacity << endl;
    _vec = new int[_capacity];
}             
ListSeq::~ListSeq(){
    cout << "ListSeq Destruida" << endl;
    delete[] _vec;
}                
 
void ListSeq::add(int valor){
    //verificação - size é menor que a capacidade?
    if(_size >= _capacity){
        _capacity += _capacity/2;
        cout << "Capacidade aumentada para " << _capacity << endl;
        //realocar
            //cria um novo
        int *novo = new int[_capacity];
            //copia
        for(int i = 0; i < _size; i++){
            novo[i] = _vec[i];
        }
        delete[] _vec;
        _vec = novo;
    }
    _vec[_size] = valor;
    _size++;
}      
void ListSeq::remove(){
    _size--;
    cout << "Elemeto " << _vec[_size] << " Removido" << endl;
}
void ListSeq::removeAt(int index){
    if(index <= _size && index >= 0){
        for(int i = index; i < _size - 1; i++){
            _vec[i] = _vec[i+1];
        }
        _size--;
    }
    else{
        cout << "indice não existe" << endl;
    }
}

void ListSeq::removeElem(int elem){
    for(int i = 0; i < _size;){
        if(_vec[i] == elem){
            for(int j = i; j < _size - 1; j++){
                _vec[j] = _vec[j+1];
            }
            _size--;
        }
        else{
            i++;
        }
    }
}
int ListSeq::at(int index){
    if(index >= 0 && index < _size){
        return _vec[index];
    }
    else{
        cout << "indice invalido ";
        return -999;
    }
}        
int ListSeq::size(){
    return _size;
}               
void ListSeq::print(){
    cout << "[";
    for(int i = 0; i < _size; i++){
        cout << _vec[i] << ",";
    }
    cout << "]" << endl;
}