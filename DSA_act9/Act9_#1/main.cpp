#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> nums;
    stack<int> numsA;
    int num, temp;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;
        nums.push(num);
    }

    while (!nums.empty()) {
        temp = nums.top();
        nums.pop();
        while (!numsA.empty() && numsA.top() > temp) {
            nums.push(numsA.top());
            numsA.pop();
        }
        numsA.push(temp);
        
    }
    cout << "\nStack in Ascending order: " << endl;
    while (!numsA.empty()) {
        cout << numsA.top() << endl;
        numsA.pop();
    }
    return 0;
}