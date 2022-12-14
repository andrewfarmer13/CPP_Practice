#include "List.h"
#include <iostream>

List::List() {
	first = NULL;
}

List::~List() {
	Node* temp;
	temp = first;
	while (temp != NULL) {
		Node* del = temp;
		temp = temp->next;
		delete(del);
	}
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

void List::erase(int pos) {
	
	if (pos == 0) {
		Node* ptr = first;//Creates a temp Node
		first = ptr->next;//Makes the first node in the list the ptr->next
		delete(ptr);//Deletes the temp Node 
	}
	else {
		Node* preptr = first;//declare new node for navigating;

		for (int i = 0; i < pos - 1; i++) {//Goes through the list to find the item before the item you want to delete
			preptr = preptr->next;
		}
		Node* ptr = preptr->next;//Creates temp Node; This node becomes the node you want to delete
		preptr->next = ptr->next;//Assigns the the next node after ptr node to become the next node for preptr. This bypasses the node we want gone
		delete(ptr);//Deletes the temp Node we created above
	}
}

void List::reverse() {
	
	Node* nex = NULL;//Declares a temp var
	Node* preptr = NULL;//A pointer that will be used for navigating and reversing
	Node* current = first;//Creates the main navigating pointer; sets the pointer to point to the first node in the LL

	while (current != NULL) { //  A while loop that will keep going untill the current pointer is null
		nex = current->next; // Set the temp var to point to the next node in the list
		current->next = preptr;//Current->next now points to the previous node in the list
		preptr = current;//The previous node is now the previous current
		current = nex; //The current node is now the next in the previous next node that was stored in the temp var nex above;
	}
	
	first = preptr;//The first node in the list is now the previous end of the list
}

bool List::empty() {
	if (first == NULL)
		return true;
	else
		return false;
}
