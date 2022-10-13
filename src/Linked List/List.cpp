#include "List.h"
#include <iostream>

List::List() {
	first = NULL;
}

List::~List() {

}

void List::insert(int n) {

	Node* newptr = new Node(n,nullptr);//Creates new node

	if (first == NULL) { //Checks to see if the first node is NULL 
		newptr->next = NULL;
		first = newptr;//sets the first data to n
	}
	else {

		Node* preptr = first;

		while (preptr->next != NULL) {
			preptr = preptr->next;
		}
		newptr->next = preptr->next;
		preptr->next = newptr;

	}
}

void List::display() {

	Node* temp = first;
	while (temp != NULL) {
		std::cout << temp->data << ", ";
		temp = temp->next;
	}
	std::cout << "\n";
}