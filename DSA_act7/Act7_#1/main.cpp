// Activity 7: Problem 1
#include <iostream>
using namespace std;

int main() {

    int arr[5], element, big = 0, small;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> element;
        arr[i] = element;
    }

    small = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] > big) {
            big = arr[i];
        } 
        
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    cout << "Biggest: " << big << endl;
    cout << "Smallest: " << small << endl;

    return 0;
}