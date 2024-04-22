#pragma once

#include "Node.h"

class MyList
{
public:
	MyList() : m_head(nullptr) {}

	//������� � ����� ������ (Inserting at the end of a list)
	void push_back(int data);
	//������� � ������ ������ (Inserting at the beginning of a list)
	void push_front(int data);
	//������� � �������� ������ (Inserting in the middle of a list)
	void insert(int pos, int data);
	//����� ���������� ���������� ������ �� �������
	void show();


private:
	Node* m_head;
};