#include <iostream>
using namespace std;

int main() {
    int OLD[5], NEW[5], element, count = 4;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element: ";
        cin >> element;
        OLD[i] = element;
    } 

    for (int i = 0; i < 5; i++) {
        NEW[i] = OLD[count];
        count--;
    }

    for (int i = 0; i < 5; i++) {
        cout << NEW[i] << endl;
    }

    return 0;
} 