#include "Node.h"

template <typename T>
Node<T>::Node(T d, Node* n) {
	data = d;
	next = n;
}