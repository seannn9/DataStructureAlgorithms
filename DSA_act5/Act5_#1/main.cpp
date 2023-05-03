#include <iostream>
#include "vars.h"

using namespace std;

int main()
{
    vars obj(10, 20);
    cout << "A: " << obj.getA() << endl;
    cout << "B: " << obj.getB();
    return 0;
}
