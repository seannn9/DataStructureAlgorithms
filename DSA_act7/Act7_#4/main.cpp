#include <iostream>
using namespace std;

int main() {
    int num[3][3], val, big = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter value: ";
            cin >> val;
            num[i][j] = val;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (num[i][j] > big) {
                big = num[i][j];
            }
        } cout << "Biggest in row " << i+1 << ": " << big << endl;
        big = 0;
    }

    return 0;
}