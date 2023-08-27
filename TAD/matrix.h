#ifndef MATRIZ_H
#define MATRIZ_H 
#include <iostream>

class matrix{
    private:
    int l;
    int c;
    int** mat;
    public:
        matriz(int n, int m);
        int getElemento(int i, int j); 
        void setElemento(int i ,int j); 
        int getLinha(); 
        int getColuna(); 
        void coutMatriz();
        ~matrix();
};
#endif