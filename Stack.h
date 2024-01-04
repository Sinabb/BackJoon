#pragma once

void B28278()
{
#include <iostream>
#include <stack>

    int main() {
        int N;
        std::cin >> N;

        std::stack<int> mystack;

        for (int i = 0; i < N; ++i) {
            int command;
            std::cin >> command;

            switch (command) {
            case 1: {
                int X;
                std::cin >> X;
                mystack.push(X);
                break;
            }
            case 2: {
                if (!mystack.empty()) {
                    std::cout << mystack.top() << std::endl;
                    mystack.pop();
                }
                else {
                    std::cout << -1 << std::endl;
                }
                break;
            }
            case 3: {
                std::cout << mystack.size() << std::endl;
                break;
            }
            case 4: {
                std::cout << (mystack.empty() ? 1 : 0) << std::endl;
                break;
            }
            case 5: {
                if (!mystack.empty()) {
                    std::cout << mystack.top() << std::endl;
                }
                else {
                    std::cout << -1 << std::endl;
                }
                break;
            }
            }
        }

        return 0;
    }
}