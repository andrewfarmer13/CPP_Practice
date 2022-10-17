#include "stack.h"

Stack::Stack() {
	myTop = NULL;//Initializes the top to nope
}

Stack::~Stack() {//Cleans up everything
	Node* temp = myTop;//Creates a temp var and assigns the Node myTop to it
	while (temp != NULL) {//While loop that works until temp does not equal to null
		Node* ptr = temp;//Creates a new pointer and assings temp to it
		temp = temp->next;//Assigns temp to the next node
		delete(ptr);//deletes the pointer
	}
}

void Stack::push(int d) {//This function is to add something new to the stack

	Node* ptr = new Node(d, nullptr);//Creates the new pointer node that will be added to the stack

	if (myTop == NULL) {//If the stack is empty make the new pointer the top
		ptr->next = nullptr;//makes the new pointer point to a nullptr
		myTop = ptr;//myTop now is the newptr
	}
	else {

		ptr->next = myTop;//The newpointer now points to the previous top
		myTop = ptr;//myTop is now equal to the new pointer
	}
}

int Stack::top() {
	return myTop->data;//returns the data of the top Node
}

void Stack::pop() {//Removes the top of the stack
	Node* temp;//Temp var declared
	temp = myTop;//myTop is assigned to temp
	myTop = myTop->next;//myTop now equals to the node that myTop 
	delete(temp);//Deletes the temp ptr
}

void Stack::display() {//Displays all the contents of the stack
	Node* ptr = myTop;//a new ptr that now equals to myTop

	while (ptr != NULL) {//While loop that goes until the navigating ptr is equal to null
		std::cout << ptr->data << "\t";//prints out the data of the ptr
		ptr = ptr->next;//the ptr is assigned to the next ptr in the stack
	}
}

bool Stack::empty() {//Returns true or false depending if the stack is empty or not
	if (myTop == NULL) {
		return true;
	}
	else {
		return false;
	}
}