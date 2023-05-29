#include <iostream>
#include <deque>

using namespace std;

int main() {
    int user;
    deque<int> dNum = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    while (true) {
        cout << "1 - remove element from the front\n2 - remove element from the back\n3 - display updated deque\npick: ";
        cin >> user;
        if (user == 1) {
            dNum.pop_front();
        } else if (user == 2) {
            dNum.pop_back();
        } else {
            for (int i : dNum) {
                cout << i << " ";
            }
            break;
        }
    }
    return 0;
}
