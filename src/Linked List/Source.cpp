#include <iostream>
#include "List.h"

int main() {

	List l = List();

	l.insert(1);
	l.insert(5);
	l.insert(10);
	l.insert(11);
	l.display();

	return 0;
}