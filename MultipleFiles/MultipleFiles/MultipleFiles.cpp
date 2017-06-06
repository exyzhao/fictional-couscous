// MultipleFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "add.h"

int main()
{
	int MY_FAVORITE_NUMBER = 9;
	std::cout << MY_FAVORITE_NUMBER << std::endl;
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
    return 0;
}

