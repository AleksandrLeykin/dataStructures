#include "Stack.h"

#include <iostream>

Stack::~Stack()
{
	Node* currentNode = nullptr;
	while (m_root != nullptr)
	{
		currentNode = m_root;
		m_root = m_root->m_next;
		std::cout << " delete node with data: " << currentNode->m_data << std::endl;
		delete currentNode;
	}
}

bool Stack::push(int x)
{
	// создаем новый узел (create a new node)
	Node* node = new Node(x);
	// если стек пуст, возвращаем узел  (if the stack is empty, return the node)
	if (m_root == nullptr)
	{
		m_root = node;
		return true;
	}
	else
	{		
		node->m_next = m_root;
		m_root = node;		
		return true;
	}

	std::cout << "no stack!" << std::endl;
	return false;
}

int Stack::pop()
{
	if (isEmpty())
	{
		std::cout << "stack is empty";
		return 0;
	}
	
	//текущая позиция
	auto currentNode = m_root;
	int x = currentNode->m_data;
	m_root = m_root->m_next;
	delete currentNode;
	return x;
	
	//return 0;
}

int Stack::peek()
{
	// если стек пуст, возвращаемся
	if (isEmpty())
	{
		std::cout << "Stack is Empty";
		return 0;
	}
	else
		// возвращаем значение вершины стека без удаления данных
	{
		int x = m_root->m_data;
		return x;
	}
	return 0;
}

bool Stack::isEmpty()
{
	return m_root == nullptr;
}

void Stack::show()
{
	auto currentNode = m_root;
	while (currentNode != nullptr)
	{
		std::cout << currentNode->m_data << " ";
		currentNode = currentNode->m_next;
	}
}
