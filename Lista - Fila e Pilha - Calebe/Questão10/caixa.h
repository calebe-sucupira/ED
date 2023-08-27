#ifndef CAIXA_H
#define CAIXA_H
#include <string>
using namespace std;

struct caixa{
    int peso;
    string descricao;

    caixa(){
        peso = 0;
        descricao = "";
    }
    caixa(int peso, string descricao){
        if(peso == 7 || peso == 11 || peso == 13){
            this->peso = peso;
            this->descricao = descricao;
        }
        else{
            cout << "ERRO. Apenas caixa com peso de 7, 11 ou 13 toneladas." << endl;
        }
    }
};

#endif