#include "myList.h"
#include <iostream>

void MyList::push_back(int data)
{
	// ������� ����� ���� (create a new node)
	Node* node = new Node(data);
	// ���� ������ ����, ���������� ����  (if the list is empty, return the node)
	if (m_head == nullptr)
	{
		m_head = node; 
		return;
	}

	// � ����� ���� ��������� ������� ������ (in a loop we look for the last element of the list)
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}
	// ��������� ��������� next ���������� ���� �� ��������� �� ����� ����
	// Update the last node's next pointer to a pointer to the new node
	last->m_next = node;
	return;
}

void MyList::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

void MyList::insert(int pos, int data)
{
	// ������� ����� ���� (create a new node)
	Node* newNode = new Node(data);

	// ���� ������ ����, ����� ���� � ����� ������� ������ 
	// if the list is empty, the new node will be the beginning of the list
	if (m_head = nullptr)
	{
		m_head = newNode;
		return;
	}

	// ������� ������ - �������  � ������ ������(extreme case - insertion at the beginning of the list)
	if (pos == 0)
	{
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos = 0;

	Node* current = m_head;
	// � ����� ���� �� ������, ���� ������ �� ��������, ��� ���� �� ������ �� �������
	// in a loop we go through the list until the list ends, or until we reach the position
	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}
	// ������ ��������� �� ��������� ���� �� ��������� �� ����� ����
	// change the pointer to the next node to a pointer to the new node
	Node* next = current->m_next;
	current->m_next = newNode;
	// ��������� ������ �������, ������ ��������� �� ����, ��������� ����� ������ ����, 
	// �� ��������� �� ����, ��������� �� current
	newNode->m_next = next;
}

void MyList::show()
{
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		std::cout << last->m_data;
		last = last->m_next;	
		if (last->m_next == nullptr)		
			std::cout << last->m_data; 
		
	}
}
