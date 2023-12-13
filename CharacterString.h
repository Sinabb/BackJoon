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

void B11654()
{

		char input;
		std::cin >> input;

		int asciiValue = static_cast<int>(input);

		std::cout << asciiValue << std::endl;

	
}

void B11720()
{
	int N;
	std::cin >> N;

	std::string numbers;
	std::cin >> numbers;

	int sum = 0;
	for (char digit : numbers)
	{
		sum += digit - '0';
	}

	std::cout << sum << std::endl;
}
