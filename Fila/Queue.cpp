#include <iostream>
#include <stdexcept>
#include "Queue.h"
using namespace std;

Queue::Queue(int capacity) {
    array = new (std::nothrow) int[capacity];
    if(array == nullptr) {
        throw runtime_error("erro: memória indisponível");
    }
    this->capacity = capacity;
    m_size = 0; 
    first = 0; 
}
Queue::~Queue() {
    delete[] array;
}
bool Queue::empty() {
    return m_size == 0;
}
bool Queue::full() {
    return m_size == capacity;
}
int Queue::size() {
    return m_size;
}
void Queue::push_back(const Item& key) { 
    if (full()) { 
        throw overflow_error("erro: fila cheia");
    }
    int fim = (first + m_size) % capacity;
    array[fim] = key;
    m_size++;
}
void Queue::pop_front() {
    if (empty()) {
        throw overflow_error("erro: fila vazia");
    }
    first = (first + 1) % capacity;
    m_size--;
}
Item& Queue::front() {
    if (empty())
        throw overflow_error("erro: fila vazia");
    return array[first]; 
}
Item& Queue::back() {
    if (empty())
        throw overflow_error("erro: fila vazia");
    return array[(first + m_size-1) % capacity];
}


