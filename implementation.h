#pragma once
#include <iostream>

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