#include <iostream>
#include "functions.h"

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    functions obj;
    std::cout << "Positive or Negative: " << obj.posNeg(n) << endl;
    std::cout << "Absolute Value: " << obj.absVal(n) << endl;
    std::cout << "Odd or Even: " << obj.oddEven(n) << endl;
    std::cout << "Squared: " << obj.squared(n) << endl;
    std::cout << "Cubed: " << obj.cubed(n) << endl;
    std::cout << "Divisible by 5? " << obj.divByFive(n) << endl;
    return 0;
}
