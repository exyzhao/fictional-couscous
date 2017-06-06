// FunctionCalling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer" << std::endl;
	int a;
	std::cin >> a;
	return a;
}

int main()
{
	int x = getValueFromUser();
	int y = getValueFromUser();

	std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}

