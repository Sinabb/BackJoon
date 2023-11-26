#pragma once

#include <iostream>

int B1330 ()
{
	int x;
	int y;

	std::cin >> x;
	std::cin >> y;

	if (x > y)
	{
		std::cout << " > " << std::endl;
	}
	else if (x < y)
	{
		std::cout << " < " << std::endl;
	}
	else
	{
		std::cout << "==" << std::endl;
	}
	return 0;
}