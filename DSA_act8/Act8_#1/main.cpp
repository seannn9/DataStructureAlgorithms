#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> inputNums = {};
    int num, big = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;
        inputNums.push_back(num);
    }

    for (int i : inputNums) {
        if (i > big) {
            big = i;
        }
    }

    cout << "The largest number in the vector is: " << big;
    return 0;
}