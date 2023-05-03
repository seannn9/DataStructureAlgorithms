#include "rectangle.h"

void rectangle::setLength(int a) {
    length = a;
}

void rectangle::setWidth(int a) {
    width = a;
}

int rectangle::getLength() {
    return length;
}

int rectangle::getWidth() {
    return width;
}

int rectangle::area() {
    return length*width;
}

int rectangle::perimeter() {
    return 2*(length+width);
}
