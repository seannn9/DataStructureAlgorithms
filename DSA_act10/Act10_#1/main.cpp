#include <iostream>
#include <set>

using namespace std;

int main() {
    int voltages[10], val;
    set<int, greater<int>> voltageSet;

    for (int i = 0; i < sizeof(voltages)/4; i++) {
        cout << "Enter voltage value: ";
        cin >> val;
        voltages[i] = val;
    }

    for (int i : voltages) {
        voltageSet.insert(i);
    }

    cout << "Input voltages in Descending order:";
    for (int i : voltageSet) {
        cout << i << " ";
    }
    return 0;
}