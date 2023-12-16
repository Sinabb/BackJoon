#pragma once
#include <iostream>
#include <vector>
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

void B10809()
{
	std::string string;
	std::cin >> string;

	std::vector<int> positions(26, -1);

	for (int i = 0; i <string.length(); i++)
	{
		char CharString = string[i];
		int index = CharString - 'a';

		if (positions[index] == -1)
		{
			positions[index] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		std::cout << positions[i] << " ";
	}
}

void B2675()
{

	int T;
	std::cin >> T;

	while (T--) {
		int R;
		std::string S;
		std::cin >> R >> S;

		for (char c : S) 
		{
			for (int i = 0; i < R; ++i) 
			{
					std::cout << c;
			}
		}
			std::cout << std::endl;
	}
}