#include <string>
#include "calculationSupport.hpp"
using namespace std;
extern string addBigNum(string num1, string num2);
extern int compareBigNum(string num1, string num2);

string subBigNum(string num1, string num2) {
    bool positiveSignNum1 = detectingSignFlag(num1);
    bool positiveSignNum2 = detectingSignFlag(num2);
    if(positiveSignNum1 == false && positiveSignNum2 == true) {
        num1.insert(num1.begin(), '-');
        num2.insert(num2.begin(), '-');
        return addBigNum(num1, num2);
    }
    else if(positiveSignNum1 == true && positiveSignNum2 == false) {
        return addBigNum(num1, num2);
    }
    else if(positiveSignNum1 == false && positiveSignNum2 == false) {
        num1.swap(num2);
    }

    int compare = compareBigNum(num1, num2);
    if(compare == 0) {
        return string("0");
    }
    if(compare < 0) {
        num1.swap(num2);
    }
    reverseString(num1);
    reverseString(num2);
    aligningString(num1, num2);
    int num1_len = num1.size();
    int num2_len = num2.size();
    string result("");
    int borrow = 0;
    for(int i = 0, j = 0; i < num1_len && j < num2_len; i++, j++) {
        int tmpNum1 = (int)(num1[i] - '0') + borrow;
        int tmpNum2 = (int)(num2[j] - '0');
        borrow = 0;
        if(tmpNum1 < tmpNum2) {
            tmpNum1 += 10;
            borrow = -1;
        }
        result += ((char)(tmpNum1 - tmpNum2) + '0');
    }
    if(compare < 0) {
        result += '-';
    }
    reverseString(result);
    return result;
}
