#include <iostream>
#include <random>
using namespace std;

int yourBet() {
    int bet;
    do {
        cout << "1 - Rock\n2 - Paper\n3 - Scissors\nPick: ";
        cin >> bet;
    } while (bet < 1 || bet > 3);
    return bet;
}

int pcBet() {
    srand(time(0));
    int bet = rand() % 3 + 1;
    return bet;
}

void result(int user, int comp) {
    int playerScore = 0, compScore = 0;
    string winner;
    if (user == 1) {
        if (comp == 1) {
            cout << "Draw\n";
        } else if (comp == 2) {
            cout << "Computer scores\n";
            compScore++;
        } else {
            cout << "Player scores\n";
            playerScore++;
        }
    } else if (user == 2) {
        if (comp == 1) {
            cout << "Player scores\n";
            playerScore++;
        } else if (comp == 2) {
            cout << "Draw\n";
        } else {
            cout << "Computer scores\n";
            compScore++;
        }
    } else {
        if (comp == 1) {
            cout << "Computer cores\n";
            compScore++;
        } else if (comp == 2) {
            cout << "Player scores\n";
            playerScore++;
        } else {
            cout << "Draw\n";
        }
    }
    if (playerScore == compScore) {
        winner = "Draw";
    } else if (playerScore > compScore) {
        winner = "Player";
    } else {
        winner = "Computer";
    }
    cout << "\nFinal Scores: " << endl;
    cout << "Player: " << playerScore << endl;
    cout << "Computer: " << compScore << endl;
    cout << "Winner: " << winner << endl;
}

int main() {
    int userBet = yourBet();
    int compBet = pcBet();
    if (userBet == 1) {
        cout << "You picked Rock";
    } else if (userBet == 2) {
        cout << "You picked Paper";
    } else {
        cout << "You picked Scissors";
    }
    cout << endl;
    if (compBet == 1) {
        cout << "Computer picked Rock";
    } else if (compBet == 2) {
        cout << "Computer picked Paper";
    } else {
        cout << "Computer picked Scissors";
    }
    cout << endl;
    result(userBet, compBet);
    return 0;
}