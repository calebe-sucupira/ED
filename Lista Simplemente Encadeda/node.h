#ifndef NODE_H
#define NODE_H

struct node {
    int valor;   
    node *prox;  
    
    node(const int& k, node *nextnode) {
        valor = k; 
        prox = nextnode;
    }
};


#endif