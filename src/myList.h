#pragma once

#include "Node.h"

class MyList
{
public:
	MyList() : m_head(nullptr) {}

	//¬ставка в конец списка (Inserting at the end of a list)
	void push_back(int data);
	//¬ставка в начало списка (Inserting at the beginning of a list)
	void push_front(int data);
	//¬ставка в середину списка (Inserting in the middle of a list)
	void insert(int pos, int data);
	//вывод содержимое св€занного списка на консоль
	void show();


private:
	Node* m_head;
};