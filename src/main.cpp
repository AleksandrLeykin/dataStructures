#include <iostream>
#include "myList.h"

int main()
{
	setlocale(LC_ALL, "ru");
	
	std::cout << "Hello! Привет!!" << std::endl;

	MyList testList;
	testList.push_front(25);
	testList.push_back(15);
	testList.push_back(10);
	testList.show();

	return 0;
}


