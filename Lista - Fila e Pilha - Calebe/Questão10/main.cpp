#include <iostream>
#include <string>
#include "pilhaCaixa.h"
using namespace std;

void chegada(caixa* nova, pilhaCaixa* p) {
    pilhaCaixa p2, p3;
    if (p->cheia()) {
        cout << "Pilha cheia!" << endl;
    } else {
        if(nova->peso == 7) {
            p->empilhar(*nova);
        }
        if(nova->peso == 11) {
            while(p->topo().peso == 7) {
                p3.empilhar(p->topo());
                p->desempilhar();
            }
            p->empilhar(*nova);
            while(!p3.vazia()) {
                p->empilhar(p3.topo());
                p3.desempilhar();
            }
        }
        if(nova->peso == 13) {
            while(p->topo().peso == 7) {
                p3.empilhar(p->topo());
                p->desempilhar();
            }
            while(p->topo().peso == 11) {
                p2.empilhar(p->topo());
                p->desempilhar();
            }

            p->empilhar(*nova);

            while(!p2.vazia()) {
                p->empilhar(p2.topo());
                p2.desempilhar();
            }
            while(!p3.vazia()) {
                p->empilhar(p3.topo());
                p3.desempilhar();
            }
        }

    }
}

int main(){
    pilhaCaixa p1;

    caixa c1(7, "Caixa 1");
    caixa c2(11, "Caixa 2");
    caixa c3(13, "Caixa 3");

    chegada(&c1, &p1);
    chegada(&c2, &p1);
    chegada(&c3, &p1);

    int opcao;

    do{
        cout << "1 - Chegada de uma nova caixa" << endl;
        cout << "2 - Exibir pilha de caixas" << endl;
        cout << "3 - Sair" << endl;
        cin >> opcao;

        if (opcao == 1)
        {
            int peso;
            string descricao;

            cout << "Digite o peso da caixa: ";
            cin >> peso;
            cout << "Digite a descrição da caixa: ";
            cin.ignore();
            getline(cin, descricao);

            caixa nova(peso, descricao);
            chegada(&nova, &p1);
        }
        else if (opcao == 2)
        {
            pilhaCaixa aux;
            while (!p1.vazia()){
                cout << "Caixa: " << p1.topo().descricao << " - Peso: " << p1.topo().peso<< endl;
                aux.empilhar(p1.topo());
                p1.desempilhar();
            }
            while (!aux.vazia()){
                p1.empilhar(aux.topo());
                aux.desempilhar();
            }
        }
    }while(opcao != 3);
    


}