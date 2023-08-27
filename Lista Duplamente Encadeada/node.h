#ifndef NODE_H
#define NODE_H
struct Node{
	int value;
	Node* next;
	Node* back;
		
	Node(const int& k, Node* nextnode, Node* backnode){
		value = k;
		next = nextnode;
		back = backnode;
	}
};

#endif
