#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

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



int  Dynamic1463(){
    int N;
    std::cin >> N;

    std::vector<int> dp(N + 1, 0);

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; 
        if (i % 2 == 0) dp[i] = std::min(dp[i], dp[i / 2] + 1); 
        if (i % 3 == 0) dp[i] = std::min(dp[i], dp[i / 3] + 1); 
    }

    std::cout << dp[N] << std::endl;

    return 0;
}

int Sum4(int n)
{
    std::vector<int> num(n + 1, 0);

    num[0] = 1;
    num[1] = 1;
    num[2] = 2;

    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2] + num[i - 3];
    }

    return num[n];
}

int Num9095()
{
    int T;
    std::cin >> T;

    while (T--) {
        int n;
        std::cin >> n;

        int ways = Sum4(n);
        std::cout << ways << std::endl;
    }

    return 0;
}


