#pragma once

void B2738()
{
#include <iostream>

    int main() {
        int N, M;

        std::cin >> N >> M;

        int A[N][M];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                std::cin >> A[i][j];
            }
        }

        int B[N][M];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                std::cin >> B[i][j];
            }
        }

        int result[N][M];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                std::cout << result[i][j] << " ";
            }
            std::cout << std::endl;
        }

        return 0;
    }
}