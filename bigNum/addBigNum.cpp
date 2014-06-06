#include <string>
#include "calculationSupport.hpp"
using namespace std;
extern string subBigNum(string num1, string num2);

string addBigNum(string num1, string num2) {
    bool positiveSignNum1 = detectingSignFlag(num1);
    bool positiveSignNum2 = detectingSignFlag(num2);
    if(positiveSignNum1 == false && positiveSignNum2 == true) {
        return subBigNum(num2, num1);
    }
    else if(positiveSignNum1 == true && positiveSignNum2 == false) {
        return subBigNum(num1, num2);
    }
    bool positiveSignedFlag = true;
    if(positiveSignNum1 == false) {
        positiveSignedFlag = false;
    }
    reverseString(num1);
    reverseString(num2);
    aligningString(num1, num2);
    int num1_len = num1.size();
    int num2_len = num2.size();
    string result("");
    int carry = 0;
    int numTmp;
    for(int i = 0, j = 0; i < num1_len && j < num2_len; i++, j++) {
        numTmp = (int)(num1[i] - '0') + (int)(num2[j] - '0') + carry;
        carry = numTmp / 10;
        result += ((char)(numTmp % 10) + '0');
    }
    if(carry == 1) {
        result += '1';
    }
    if(!positiveSignedFlag) {
        result += '-';
    }
    reverseString(result);
    return result;
}
