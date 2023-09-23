#pragma once
#include <iostream>
#include <vector>

int NumberCount() {
    int N;
    std::cin >> N;

    std::vector<int> Number(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> Number[i];
    }

    int v;
    std::cin >> v;

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (Number[i] == v) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}