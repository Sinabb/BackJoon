#pragma once

#include <iostream>

int Dynamic2839()
{
    int N;
    std::cin >> N;

    int num_5kg = N / 5;

    while (num_5kg >= 0) {
        int remaining_weight = N - (5 * num_5kg);
        if (remaining_weight % 3 == 0) {
            int num_3kg = remaining_weight / 3;
            std::cout << num_5kg + num_3kg << std::endl;
            return 0;

            num_5kg--;
        }

        std::cout << -1 << std::endl;
        return 0;
    }
}