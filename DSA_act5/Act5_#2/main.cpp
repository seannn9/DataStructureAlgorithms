#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    rectangle obj;
    obj.setLength(10);
    obj.setWidth(5);
    cout << "Rectangle\nLength: " << obj.getLength() << endl;
    cout << "Width: " << obj.getWidth() << endl;
    cout << "Area: " << obj.area() << endl;
    cout << "Perimeter: " << obj.perimeter() << endl;
    return 0;
}
