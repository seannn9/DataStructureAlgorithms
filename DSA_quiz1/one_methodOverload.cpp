#include <iostream>
using namespace std;

int prod(int a, int b) {
    return a*b;
}

int prod(int a, int b, int c) {
    return a*b*c;
}

int main() {
    cout << prod(10, 20) << endl;
    cout << prod(10, 20, 30);
    return 0;
}