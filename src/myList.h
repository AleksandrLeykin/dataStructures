#pragma once

#include "Node.h"

class MyList
{
public:
	MyList() : m_head(nullptr) {}

	~MyList() { clear(); }

	//¬ставка в конец списка (Inserting at the end of a list)
	void push_back(int data);
	//¬ставка в начало списка (Inserting at the beginning of a list)
	void push_front(int data);
	//¬ставка в середину списка (Inserting in the middle of a list)
	void insert(int pos, int data);
	//вывод содержимое св€занного списка на консоль
	void show();
	//метода дл€ удалени€ узла по значению ключа
	void deleteNode(int data);
	//”даление узла по позиции
	void deleteNodePos(int position);
	//удаление всего списка
	void clear();


private:
	Node* m_head;
};