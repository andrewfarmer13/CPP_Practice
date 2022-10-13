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

		Node* preptr = first;//Creates a new nodeptr to navigate through the list

		while (preptr->next != NULL) { //Searches the linked list; if there is data in the next pointer the navigating ptr (preptr) = the next pointer
			preptr = preptr->next; //The assignment mentioned in the previous comment
		}
		newptr->next = preptr->next;//Sets the newptr->next to Null
		preptr->next = newptr; //This assings new data the list

	}
}

void List::display() {

	Node* temp = first;//Navigating ptr
	while (temp != NULL) { //While loop that navigates through the linked list while there is still data
		std::cout << temp->data << ", "; //Prints out the data
		temp = temp->next; //sets the navigating ptr to the next item in the list
	}
	std::cout << "\n";
}