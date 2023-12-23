#pragma once
#include <iostream>
#include <vector>
#include <sstream>
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

void B1152()
{
#include <iostream>
#include <string>
#include <sstream>

	int countWords(const std::string & input) 
	{
		std::stringstream ss(input);
		std::string word;
		int count = 0;

		while (ss >> word) {
			count++;
		}

		return count;
	}

	int main() {
		std::string input;
		std::getline(std::cin, input);

		int wordCount = countWords(input);

		std::cout << wordCount << std::endl;

		return 0;
	}
}

void B2908()
{
#include <iostream>
	using namespace std;

	int main() {
		
		int A, B;
		cin >> A >> B;

		int a1 = A / 100;
		int a2 = (A / 10) % 10;
		int a3 = A % 10;

		int b1 = B / 100;
		int b2 = (B / 10) % 10;
		int b3 = B % 10;

		int constantA = a3 * 100 + a2 * 10 + a1;
		int constantB = b3 * 100 + b2 * 10 + b1;

		cout << (constantA > constantB ? constantA : constantB) << endl;

		return 0;
	}
}