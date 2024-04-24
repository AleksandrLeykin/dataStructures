#include "Node.h"
#include <iostream>
class Stack
{
private:
    Node* m_root = nullptr;
public:
    Stack() : m_root(nullptr) {}
    ~Stack();
    //Операция push кладет на вершину новый элемент стека и возвращает результат успешности операции
    bool push(int x);
    //Операция pop снимает с вершины стека последний элемент и возвращает его пользователю
    int pop();
    int peek();
    bool isEmpty();
    void show();
};