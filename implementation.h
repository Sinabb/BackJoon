#pragma once
#include <iostream>
#include <climits>

using namespace std;

int Oven() {
    int hour, minute, time;
    cin >> hour >> minute >> time;

    int total_minutes = hour * 60 + minute + time;

    int new_hour = total_minutes / 60;
    int new_minute = total_minutes % 60;

    if (new_hour >= 24)
    {
        new_hour %= 24;
    }

    cout << new_hour << " " << new_minute << endl;

    return 0;
}

int maxmin() {
    int n;
    std::cin >> n;

    int min_value = INT_MAX;
    int max_value = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        if (num < min_value) {
            min_value = num;
        }
        if (num > max_value) {
            max_value = num;
        }
    }

    std::cout << min_value << " " << max_value << std::endl;

    return 0;
}