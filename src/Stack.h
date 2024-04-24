#include "Node.h"
#include <iostream>
class Stack
{
private:
    Node* m_root = nullptr;
public:
    Stack() : m_root(nullptr) {}
    ~Stack();
    //�������� push ������ �� ������� ����� ������� ����� � ���������� ��������� ���������� ��������
    bool push(int x);
    //�������� pop ������� � ������� ����� ��������� ������� � ���������� ��� ������������
    int pop();
    int peek();
    bool isEmpty();
    void show();
};