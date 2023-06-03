#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> clients;
    while (true) {
        int ans;
        string name;
        cout << "Please pick:\n1 - Add client\n2 - Next client\n3 - Service ended\nAnswer: ";
        cin >> ans;
        if (ans == 1) {
            cout << "Please enter your name: ";
            cin >> name;
            clients.push(name);
        } else if (ans == 2) {
            if (clients.empty()){
                cout << "Queue is empty" << endl;
            } else {
                cout << "Next in line: " << clients.front() << endl;
                clients.pop();
            }
        } else if (ans == 3){
            cout << "Program terminated";
            break;
        } else {
            cout << "Please try again" << endl;
        }
        cout << endl;
    }
    return 0;
}