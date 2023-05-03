#include <iostream>
#include "large.h"

using namespace std;

int main()
{
    large obj;
    cout << obj.getLarge(99, 101) << endl;
    cout << obj.getLarge(100, 12, 32) << endl;
    cout << obj.getLarge(10, 20, 30, 5);
    return 0;
}
