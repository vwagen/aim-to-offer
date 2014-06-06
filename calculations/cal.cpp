#include "cal.hpp"

int main(int argc, char* argv[]) {
    double base = 1.001;
    int exponent = 99999;
    double powerResult = power(base, exponent);
    if(PowerInvalidInputFlag == 0) {
        cout << base << " power by " << exponent << " is " << powerResult << endl;
    }
    else {
        cout << "Input invalid, flag is " << PowerInvalidInputFlag << endl;
    }
    return 0;
}
