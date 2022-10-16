#include <iostream>
#include <stack>
#include <string>
#include "Node.h"
#include "stack.h"

int main() {
	std::stack<std::string> s;

	s.push("!");
	s.push("World");
	s.push("Hello");
	
	while (!s.empty()) {
		std::cout << s.top() << "\t";
		s.pop();
		
	}
	
	Stack myStack;
	myStack.empty();
	myStack.push(1);
	myStack.push(3);
	myStack.push(4);
	myStack.push(2);
	myStack.push(5);
	myStack.pop();
	myStack.pop();
	std::cout << "\nMy Stack: \n";
	myStack.display();
}