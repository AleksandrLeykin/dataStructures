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
	//��� ����������
	/*Node* last = m_head;
	while (last->m_next != nullptr)
	{
		std::cout << last->m_data << " ";
		last = last->m_next;	
		if (last->m_next == nullptr)		
			std::cout << last->m_data << " ";
	}*/

	auto currentNode = m_head;
	while (currentNode != nullptr)
	{
		std::cout << currentNode->m_data << " ";
		currentNode = currentNode->m_next;
	}
}

void MyList::deleteNode(int data)
{
	//�������� �������� ���� �� ��������� ���������� ��� ���������
	Node* temp = m_head;
	Node* prev = nullptr;

	// ������� ������ �������� ������ ������ extreme case of removing the beginning of a list
	if (temp && temp->m_data == data)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}
	// ���� �� ������, ���� �� ������ ���� �� ��������� ������, ������ �����
	//we go through the list until we find a node with a data value equal to the key
	while (temp && temp->m_data != data)
	{
		prev = temp;
		temp = temp->m_next;
	}
	// ���� ���� �� ������, ���������� (if the node is not found, return)
	if (!temp)
		return;
	// ������ ��������� ���������� ���� ��� ����������� ���� �� ����, ��������� �� ��������� �����, 
	// � ������� ���� � �������(change the next node pointer for the previous node to the node following 
	// the node to be deleted, and delete the node with the data)
	prev->m_next = temp->m_next;
	std::cout << " delete node with data: " << temp->m_data << std::endl;

	delete temp;
}

void MyList::deleteNodePos(int position)
{
	//��� �������
	
	//Node* temp = m_head;
	//Node* prev = nullptr;
	////���� ������ ����, ���������� (if the list is empty, return)
	//if (m_head == nullptr)
	//	return;
	//if (position == 0)
	//{
	//	m_head = temp->m_next;
	//	delete temp;
	//	return;
	//}
	//int currPos = 0;
	//// ���� �� ������, ���� �� ������ ��������������� �������
	//// we go through the list until we find the corresponding position
	//while (temp && currPos != position)
	//{
	//	prev = temp;
	//	temp = temp->m_next;
	//	currPos++;
	//}
	//// ���� ���� �� ������, ���������� (if the node is not found, return)
	//if (!temp)
	//	return;
	//// ������ ��������� ���������� ���� ��� ����������� ���� �� ����, ��������� �� ��������� �����,
	//// � ������� ���� � �������(change the next node pointer for the previous node to the node following 
	//// the node to be deleted, and delete the node with the data)
	//prev->m_next = temp->m_next;
	//std::cout << " delete node with data: " << temp->m_data << std::endl;
	//delete temp;
	//

	//������� �������
	auto currentNode = m_head;
	//���������� �������, ���� ���������������� �������
	auto previousNode = currentNode;

	if (position == 0)
	{
		m_head = m_head->m_next;
		delete currentNode;
		return;
	}
	//������� �������
	int currentPosition = 0;
	while (currentNode != nullptr && currentPosition <= position)
	{
		if (currentPosition == position)
		{
			previousNode->m_next = currentNode->m_next;
			delete currentNode;
			return;
		}
		++currentPosition;
		previousNode = currentNode;
		currentNode = currentNode->m_next;
	}
}

void MyList::clear()
{
	Node* currentNode = nullptr;
	while (m_head != nullptr)
	{
		currentNode = m_head;
		m_head = m_head->m_next;
		std::cout << " delete node with data: " << currentNode->m_data << std::endl;
		delete currentNode;
	}
}
