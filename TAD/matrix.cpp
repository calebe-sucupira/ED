#include <iostream>
#include "matrix.h"
using namespace std;

matrix::matriz(int n, int m){
    this->l = n;
    this->c = m;
    this->mat = new int*[l];
    for(int i = 0; i < l; i++){
        int* linha = new int[c];
    }
    for(int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> mat[i][j];
        }
    }
}
int matrix::getElemento(int i, int j){
    return mat[i][j];
}
void matrix::setElemento(int i ,int j){
    cin >> mat[i][j];
}
int matrix::getLinha(){
    return this->l;
}
int matrix::getColuna(){
    return this->c;
}
void matrix::coutMatriz(){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << mat[i][j] << " ";
        }
    }
}
matrix::~matrix(){

}