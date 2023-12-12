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

void B9086()
{
	int T;
	std::cin >> T;

	while (T--) {
		std::string input;
		std::cin >> input;

		char first = input[0];
		char last = input[input.length() - 1];

		std::cout << first << last << std::endl;
	}
}
