#ifndef CIRDLISTENC_H
#define CIRDLISTENC_H


struct Node;
class CirDlistEnc{ 
private:
    Node* head;          
    int size;                     
public: 
    CirDlistEnc();               
    ~CirDlistEnc();    
    bool isEmpty();                    
    void add(int key);                  
    void remove();                                  
    int _size();                        
    bool search(int n);
    void print();
    Node* juntar(Node* p, Node* q);                  
};



#endif