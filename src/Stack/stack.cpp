#include "stack.h"

Stack::Stack() {
	myTop = NULL;
}

Stack::~Stack() {
	Node* temp = myTop;
	while (temp != NULL) {
		Node* ptr = temp;
		temp = temp->next;
		delete(ptr);
	}
}

void Stack::push(int d) {

	Node* ptr = new Node(d, nullptr);

	if (myTop == NULL) {
		ptr->next = nullptr;
		myTop = ptr;
	}
	else {

		ptr->next = myTop;
		myTop = ptr;
	}
}

int Stack::top() {
	return myTop->data;
}

void Stack::pop() {
	Node* temp;
	temp = myTop;
	myTop = myTop->next;
	delete(temp);
}

void Stack::display() {
	Node* ptr = myTop;

	while (ptr != NULL) {
		std::cout << ptr->data << "\t";
		ptr = ptr->next;
	}
}

bool Stack::empty() {
	if (myTop == NULL) {
		return true;
	}
	else {
		return false;
	}
}