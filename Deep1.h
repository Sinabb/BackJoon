#pragma once


void B3003()
{
#include <iostream>

    int main() {
        int kings, queens, rooks, bishops, knights, pawns;
        std::cin >> kings >> queens >> rooks >> bishops >> knights >> pawns;

        int correctKings = 1 - kings;
        int correctQueens = 1 - queens;
        int correctRooks = 2 - rooks;
        int correctBishops = 2 - bishops;
        int correctKnights = 2 - knights;
        int correctPawns = 8 - pawns;

        std::cout << correctKings << " " << correctQueens << " " << correctRooks << " "
            << correctBishops << " " << correctKnights << " " << correctPawns << std::endl;

        return 0;
    }
}