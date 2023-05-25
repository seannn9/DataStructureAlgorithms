#include <iostream>
using namespace std;

int main() {

    int arr[5], element;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> element;
        arr[i] = element;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}