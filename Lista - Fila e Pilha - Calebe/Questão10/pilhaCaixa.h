#ifndef PILHACAIXA_H
#define PILHACAIXA_H
#include <string>
#include "caixa.h"
using namespace std;

class pilhaCaixa{
    private:
        caixa* pilha;
        int top;
        int _size;

    public:
        pilhaCaixa();
        ~pilhaCaixa();
        int vazia();
        int cheia();
        void empilhar(caixa nova);
        void desempilhar();
        caixa topo();

};

#endif