#pragma once
#include "Node.h"
#include <iostream>

#ifndef STACK_H


class Stack {
private:
	Node* myTop;

public:
	Stack();
	~Stack();
	int top();
	void push(int);
	void pop();
	void display();
	bool empty();
};

#endif // !STACK_H
