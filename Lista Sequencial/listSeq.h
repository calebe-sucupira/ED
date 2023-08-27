#ifndef LISTSEQ_H
#define LISTSEQ_H

class ListSeq{
private:

    int* _vec;
    int _size = 0;
    int _capacity = 5;

public:
    //Contrutores e Destrutores
    ListSeq(int capacity);     // Construtor passando a capacidade
    ListSeq();                 // construtor padrão
    ~ListSeq();                // Destrutor

    //Métodos
    void add(int valor);       // adiciono um elemento na lista
    void remove();             // remove o ultimo elemento
    int at(int index);         // retorna o elemento do indice index
    int size();                // retornar o tamanho da listas
    void print();              // printa os elementos da lista
    void removeAt(int index);  // Remove o elemento do indice index
    void removeElem(int elem); // Remove o elemento elem da lista
};

#endif