#ifndef DLISTENC_H
#define DLISTENC_H
#include "node.h"

class DlistEnc{
	private:
		Node* head;
		int size;
	public:
		DlistEnc();
		~DlistEnc();
		void clear();
		void add(int key);
		void remove();
		int _size();
		bool search(int n);
		void juntar(DlistEnc& l);
		void print();
};
#endif
