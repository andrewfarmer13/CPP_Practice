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

private:
	Node* first;


};

#endif // !LIST_H
