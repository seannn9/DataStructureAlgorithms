#include <iostream>
using namespace std;

int main() {
    int num, exp;
    float prod;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter exponent: ";
    cin >> exp;
    prod = num;
    if (exp == 0) {
        cout << num << "^" << exp << " = " << 1 << endl;
    } else {
        if (exp < 0) {
            for (int i = 1; i < (exp*=-1); i++) {
                prod *= num;
            }
            prod = 1/prod;
        } else {
            for (int i = 1; i < exp; i++) {
                prod *= num;
            }
        }
        cout << num << "^" << exp << " = " << prod << endl;
    }
    return 0;
}