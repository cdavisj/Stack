#include <iostream>

#include "stack.h"

int main()
{
	stack<int> s;

	for (int i = 0; i < 10; i++)
		s.push(i);

	std::cout << "Stack: ";
	s.print();

	std::cout << "Stack size: " << s.size() << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << "Popping " << s.pop() << std::endl;



	std::cin.get();
	return 0;
}