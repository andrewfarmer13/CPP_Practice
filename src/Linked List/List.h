#pragma once
#include "Node.h"
#ifndef LIST_H

class List
{
public:
	List();
	~List();
	void insert(int);
	void display();
	bool empty();
	Node* getFirst();
	void erase(int);
	void reverse();

private:
	Node* first;


};

#endif // !LIST_H
