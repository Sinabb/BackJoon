#pragma once
#include <iostream>

void B2562()
{
	int number[9];

	for (int i = 0; i < 9; i++)
	{
		std::cin >> number[i];
	}

	int max_number = number[0];
	int number_position = 1;

	for ( int i = 0; i < 9; i++)
	{
		if (number[i] > max_number) {
			max_number = number[i];
			number_position = i + 1;
		}
	}

	std::cout << max_number << std::endl;
	std::cout << number_position << std::endl;
}