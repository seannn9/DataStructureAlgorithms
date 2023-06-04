#include <iostream>

using namespace std;

int main() {
    int voltage[10], val, temp;
    for (int i = 0; i < sizeof(voltage)/4; i++) {
        cout << "Enter voltage value: ";
        cin >> val;
        voltage[i] = val;
    }

    for (int i = 0; i < sizeof(voltage)/4; i++) {
        for (int j = 0; j < (sizeof(voltage)/4)-i-1; j++) {
            if (voltage[j] < voltage[j+1]) {
                temp = voltage[j];
                voltage[j] = voltage[j+1];
                voltage[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < sizeof(voltage)/4; i++) {
        cout << voltage[i] << endl;
    }
    return 0;
}