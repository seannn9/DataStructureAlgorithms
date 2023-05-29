#include <iostream>
#include <list>

using namespace std;

bool passed(int grade, int passing) {
    if (grade >= passing) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int passing;
    list<int> grades = {80, 60, 90, 70, 75, 100};
    cout << "Enter passing grade: ";
    cin >> passing;
    grades.remove_if([passing](int grade) {
        return passed(grade, passing);
    });
    cout << "Passed: " << endl;
    for (int i : grades) {
        cout << i << " ";
    }
    return 0;
}