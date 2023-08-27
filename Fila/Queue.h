#ifndef QUEUE_ARRAY
#define QUEUE_ARRAY
#include <iostream>
typedef int Item;

class Queue {
private: 
    Item *array; 
    int m_size; 
    int capacity; 
    int first; 
public:
    Queue(int capacity);
    ~Queue();
    void push_back(const Item& data); 
    void pop_front(); 
    bool empty(); 
    bool full(); 
    int size(); 
    Item& front(); 
    Item& back();
};

#endif
