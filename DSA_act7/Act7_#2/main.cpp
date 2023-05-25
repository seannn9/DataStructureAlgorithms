#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 15, 31, 15, 15, 5, 2, 10, 10, 27}, count = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            cout << "Index of " << arr[i] << ": " << i << endl;
            count++;
        }
    }

    cout << "Count of even numbers: " << count << endl;

    return 0;
}