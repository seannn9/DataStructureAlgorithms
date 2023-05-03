#include "rps.h"
#include <iostream>

int rps::yourBet() {
    int bet;
    std::cout << "Enter your bet\n1 - Rock\n2 - Paper\n3 - Scisscors\nPick: ";
    std::cin >> bet;
    return bet;
}

int rps::pcBet() {
    int bet;
    std::cout << "\nEnter PC bet\n1 - Rock\n2 - Paper\n3 - Scisscors\nPick: ";
    std::cin >> bet;
    return bet;
}

bool rps::ifYouWin(int your, int pc) {
    if (your == 1) {
        if (pc == 1) {
            std::cout << "Draw";
        } else if (pc == 2) {
            std::cout << "Computer Win";
            return false;
        } else {
            std::cout << "Player Win";
            return true;
        }
    } else if (your == 2) {
        if (pc == 1) {
            std::cout << "Player Win";
            return true;
        } else if (pc == 2) {
            std::cout << "Draw";
        } else {
            std::cout << "Computer Win";
            return false;
        }
    } else {
        if (pc == 1) {
            std::cout << "Computer Win";
            return false;
        } else if (pc == 2) {
            std::cout << "Player Win";
            return true;
        } else {
            std::cout << "Draw";
        }
    }
}
