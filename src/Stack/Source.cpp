#include <iostream>
#include <stack>
#include <string>
#include "Node.h"

int main() {
	std::stack<std::string> s;

	s.push("!");
	s.push("World");
	s.push("Hello");
	
	while (!s.empty()) {
		std::cout << s.top() << "\t";
		s.pop();
		
	}
}