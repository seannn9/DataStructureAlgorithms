#include "group.h"
#include <iostream>

int group::perfect = 0;

group::group(int a, int b, int c)
{
    if (a == 100) {
        perfect++;
    } if (b == 100) {
        perfect++;
    } if (c == 100) {
        perfect++;
    }
}


void group::Result() {
    std::cout << perfect;
}
