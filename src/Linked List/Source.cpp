#include <iostream>
#include <list>
#include "List.h"

int main() {

	//List l = List()

	//std::cout << l.empty() << std::endl;
	//l.insert(1);
	//l.insert(5);
	//l.insert(10);
	//l.insert(11);
	//std::cout << "Given LL: \n";
	//l.display();
	//std::cout << "LL with an erase performed: \n";
	//l.erase(2);
	//l.display();
	//std::cout << "LL Reversed: \n";
	//l.reverse();
	//l.display();
	//std::cout << l.empty();


	std::list<int> linked;
	linked.push_back(3);//Inserts 3 at the back of the lsit; here it's the front because its the first item
	linked.push_back(5);
	linked.push_back(14);
	linked.push_back(1);
	linked.pop_front();//Removes whatever is at the front of the list
	std::cout << "Orginal Linked List: \n";
	for (std::list<int>::iterator i = linked.begin(); i != linked.end(); ++i) {//Needs an iterator; linked.begin() returns a pointer to the first item;
		std::cout << *i << "\t";                                               //Linked.end() returns a pointer to the end of the list
	}
	std::cout << "\nReversed Linked List: \n";
	linked.reverse();//Reverses the linked list
	for (std::list<int>::iterator i = linked.begin(); i != linked.end(); ++i) {
		std::cout << *i << "\t";
	}
	std::cout << "\nSorted Linked List: \n";
	linked.sort();//Sorts the linked list
	for (std::list<int>::iterator i = linked.begin(); i != linked.end(); ++i) {
		std::cout << *i << "\t";
	}

	return 0;
}