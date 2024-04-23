#include <iostream>
#include "myList.h"

int main()
{
	
	MyList testList;
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
	std::cout << std::endl;
	
	return 0;
}


