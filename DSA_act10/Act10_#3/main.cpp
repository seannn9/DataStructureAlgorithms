#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> students;
    multimap<int, string>::iterator it;
    int pick, stdnum;
    string name;
    while (true) {
        cout << "\n1 - Add student details\n2 - View student list\n3 - Close the program\npick: ";
        cin >> pick;
        if (pick == 1) {
            cout << "\nEnter student name: ";
            cin >> name;
            cout << "Enter student number: ";
            cin >> stdnum;
            if (students.count(stdnum) > 0) {
                cout << "\nStudent number already exists, Please try again" << endl;
                continue;
            } else {
                students.insert(pair<int, string>(stdnum, name));
            }
        } else if (pick == 2) {
            it = students.begin();
            cout << "\nNumber          Name" << endl;
            for (it; it != students.end(); it++) {
                cout << it->first << "\t";
                cout << it->second << endl;
            }
        } else if (pick == 3) {
            cout << "\nProgram terminated";
            break;
        } else {
            cout << "\nInvalid input, try again\n";
            continue;
        }
    }
    return 0;
}