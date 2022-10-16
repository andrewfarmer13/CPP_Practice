#pragma once
#ifndef NODE_H

template <typename T>
class Node {
public:
	T data;
	Node* next;
	Node(T, Node*);
};
#endif // !NODE_H