#pragma once
#ifndef NODE_H

class Node {
public:
	int data;
	Node* next;
	Node(int, Node*);
};

inline Node::Node(int d, Node* n) {
	data = d;
	next = n;
}
#endif // !NODE_H