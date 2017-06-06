// ParametersArguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int doubleNumber(int x)
{	
	return 2 * x;
}

int main()
{
	std::cout << "Enter an integer" << std::endl;
	int x;
	std::cin >> x;
	std::cout << doubleNumber(x) << std::endl;

    return 0;
}

