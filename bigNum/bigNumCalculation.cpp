#include "bigNumCalculation.hpp"

int main(int argc, char* argv[]) {
    string num1("9");
    string num2("0019");
    if(argc == 3) {
        num1 = argv[1];
        num2 = argv[2];
    }
    eliminateHeadZeros(num1);
    eliminateHeadZeros(num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    if(num1 == "" || num2 == "" || num1 == "+" || num1 == "-" || num2 == "+" || num2 == "-") {
        cout << "num1 == \"\" or num2 == \"\"" << endl;
        return -1;
    }
    if(checkNum(num1) || checkNum(num2)) {
        cout << "Num1 or Num2 illegal" << endl;
        return -1;
    }
    //Add
    string addResult = addBigNum(num1, num2);
    cout << num1 << " + " << num2 << " = " << addResult << endl;

    //Compare
    cout << num1;
    int compare = compareBigNum(num1, num2);
    if(compare == 0) {
        cout << " = ";
    }
    else if(compare < 0) {
        cout << " < ";
    }
    else {
        cout << " > ";
    }
    cout << num2 << endl;

    //Sub
    string subResult = subBigNum(num1, num2);
    eliminateHeadZeros(subResult);
    cout << num1 << " - " << num2 << " = " << subResult << endl;
    return 0;
}
