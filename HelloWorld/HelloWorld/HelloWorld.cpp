// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello world!" << std::endl;
	std::cout << "How old is Ethan?" << std::endl;
	int x;
	std::cin >> x;
	std::cout << "I'm Ethan and I'm " << x << " years old" << std::endl;

    return 0;
}

