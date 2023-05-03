#include <iostream>
#include "rps.h"

using namespace std;

int main()
{
    int user = 0, pc = 0;
    rps obj;
    do {
        int yourBet = obj.yourBet();
        int pcBet = obj.pcBet();
        std::cout << endl;
        if (obj.ifYouWin(yourBet, pcBet) == 1) {
            user+=1;
        } else {
            pc+=1;
        }
        std::cout << endl;
    } while (user < 2 && pc < 2);
    return 0;
}
