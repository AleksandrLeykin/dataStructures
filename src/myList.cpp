#include "myList.h"
#include <iostream>

void MyList::push_back(int data)
{
	// создаем новый узел (create a new node)
	Node* node = new Node(data);
	// если список пуст, возвращаем узел  (if the list is empty, return the node)
	if (m_head == nullptr)
	{
		m_head = node; 
		return;
	}

	// в цикле ищем последний элемент списка (in a loop we look for the last element of the list)
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}
	// Обновляем указатель next последнего узла на указатель на новый узел
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
	// создаем новый узел (create a new node)
	Node* newNode = new Node(data);

	// если список пуст, новый узел и будет началом списка 
	// if the list is empty, the new node will be the beginning of the list
	if (m_head = nullptr)
	{
		m_head = newNode;
		return;
	}

	// крайний случай - вставка  в начало списка(extreme case - insertion at the beginning of the list)
	if (pos == 0)
	{
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos = 0;

	Node* current = m_head;
	// в цикле идем по списку, пока список не кончится, или пока не дойдем до позиции
	// in a loop we go through the list until the list ends, or until we reach the position
	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}
	// меняем указатель на следующий узел на указатель на новый узел
	// change the pointer to the next node to a pointer to the new node
	Node* next = current->m_next;
	current->m_next = newNode;
	// связываем список обратно, меняем указатель на узел, следующий после нового узла, 
	// на указатель на узел, следующий за current
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
