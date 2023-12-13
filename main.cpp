#include <iostream>
#include <string>

int main() {
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

    return 0;
}