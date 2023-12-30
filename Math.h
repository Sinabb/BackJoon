#pragma once

void B2745()
{
#include <iostream>
#include <cmath>
#include <cctype>

    int charToDigit(char c) {
        if (isdigit(c)) {
            return c - '0';
        }
        else {
            return toupper(c) - 'A' + 10;
        }
    }

    int baseToDecimal(const std::string & number, int base) {
        int decimalValue = 0;
        int power = 0;

        for (int i = number.length() - 1; i >= 0; --i) {
            decimalValue += charToDigit(number[i]) * pow(base, power);
            ++power;
        }

        return decimalValue;
    }

    int main() {
        std::string N;
        int B;

        std::cin >> N >> B;

        int decimalValue = baseToDecimal(N, B);

        std::cout << decimalValue << std::endl;

        return 0;
    }
}

void B11005()
{
#include <iostream>
#include <string>
#include <algorithm>

    std::string decimalToBase(int decimal, int base) {
        std::string result = "";

        while (decimal > 0) {
            int remainder = decimal % base;
            if (remainder < 10) {
                result += (char)('0' + remainder);
            }
            else {
                result += (char)('A' + remainder - 10);
            }
            decimal /= base;
        }

        std::reverse(result.begin(), result.end());

        return result;
    }

    int main() {
        int N, B;

        std::cin >> N >> B;
        std::string result = decimalToBase(N, B);
        std::cout << result << std::endl;

        return 0;
    }
}