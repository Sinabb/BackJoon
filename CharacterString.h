#pragma once
#include <iostream>
#include <string>

void B27866()
{
	std::string S;
	std::cin >> S;

	int i;
	std::cin >> i;

	if (i >= 1 && i <= S.length())
	{
		std::cout << S[i - 1] << std::endl;
	}
	else
	{
		std::cerr << S.length() << std::endl;
	}
}

void B2743()
{
    std::string word;
    std::cin >> word;
    std::cout << word.length() << std::endl;
}

