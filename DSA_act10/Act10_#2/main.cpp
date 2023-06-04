#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<char, string> names;
    string name;
    char gender;
    for (int i = 0; i < 6; i++) {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your gender (M/F): ";
        cin >> gender;
        
        if (gender == 'M' || gender == 'm') {
            names.insert(pair<char, string>('M', name));
        } else if (gender == 'F' || gender == 'f') {
            names.insert(pair<char, string>('F', name));
        } else {
            cout << "\nPlease try again";
            i--;
        }
    }

    multimap<char, string>::iterator it = names.begin();
    cout << "\nWhat gender would you like to display (M/F): ";
    cin >> gender;
    
    if (gender == 'M' || gender == 'm') {
        cout << "Male:" << endl;
        for (it; it != names.end(); it++) {
                if (it->first == 'M' || it->first == 'm') {
                    cout << it->second << endl;
                }
        }
    } else if (gender == 'F' || gender == 'f') {
        cout << "Female:" << endl;
        for (it; it != names.end(); it++) {
                if (it->first == 'F' || it->first == 'f') {
                    cout << it->second << endl;
                }
        }
    }

    return 0;
}