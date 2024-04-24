#include <iostream>
#include "myList.h"
#include "Stack.h"

int main()
{	
	//MyList

	/*MyList testList;
	for (int  i = 0; i < 10; ++i)
	{
		testList.push_back(i);
	}
	testList.show();
	std::cout << std::endl;

	testList.deleteNodePos(9);
	testList.show();
	std::cout << std::endl;
	testList.deleteNodePos(0);
	testList.show();
	std::cout << std::endl;
	testList.deleteNodePos(11);
	testList.show();
	std::cout << std::endl;

	testList.push_front(25);
	testList.push_back(15);
	testList.push_back(10);
	testList.show();
	std::cout << std::endl;

	testList.deleteNode(15);
	testList.show();
	std::cout << std::endl;

	testList.push_back(17);
	testList.push_back(7);
	testList.show();
	std::cout << std::endl;

	testList.deleteNodePos(2);
	testList.show();
	std::cout << std::endl;*/
	

	//Stack
	Stack m_stack;
	m_stack.push(5);
	std::cout << m_stack.peek() << std::endl;

	m_stack.push(7);
	m_stack.push(12);
	m_stack.push(3);

	m_stack.show();
	std::cout << std::endl;

	std::cout << m_stack.pop() << std::endl;

	m_stack.show();
	std::cout << std::endl;
	return 0;
}


