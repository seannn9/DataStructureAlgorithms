#include "functions.h"

bool functions::posNeg(int n) {
    if (n > 0) {
        return true;
    } else {
        return false;
    }
}

int functions::absVal(int n) {
    if (n < 0) {
        return n * -1;
    } else {
        return n;
    }
}

bool functions::oddEven(int n) {
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int functions::squared(int n) {
    return n*n;
}

int functions::cubed(int n) {
    return n*n*n;
}

bool functions::divByFive(int n) {
    if (n % 5 == 0) {
        return true;
    } else {
        return false;
    }
}


