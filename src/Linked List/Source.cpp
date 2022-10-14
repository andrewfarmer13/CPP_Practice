#include <iostream>
#include "List.h"

int main() {

	List l = List();

	std::cout << l.empty() << std::endl;
	l.insert(1);
	l.insert(5);
	l.insert(10);
	l.insert(11);
	std::cout << "Given LL: \n";
	l.display();
	std::cout << "LL with an erase performed: \n";
	l.erase(2);
	l.display();
	std::cout << "LL Reversed: \n";
	l.reverse();
	l.display();
	std::cout << l.empty();


	return 0;
}