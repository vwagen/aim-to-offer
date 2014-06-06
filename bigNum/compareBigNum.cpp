#include <string>
#include "calculationSupport.hpp"
using namespace std;

int compareBigNum(string num1, string num2) {
    /*
     * No safe. Maybe not support?
    if(num1 == num2) {
        return 0;
    }
    */
    bool positiveSignNum1 = detectingSignFlag(num1);
    bool positiveSignNum2 = detectingSignFlag(num2);
    if(positiveSignNum1 == false && positiveSignNum2 == true) {
        return -1;
    }
    else if(positiveSignNum1 == true && positiveSignNum2 == false) {
        return 1;
    }
    if(num1.size() < num2.size()) {
        if(positiveSignNum1 == true && positiveSignNum2 == true) {
            return -1;
        }
        else if(positiveSignNum1 == false && positiveSignNum2 == false) {
            return 1;
        }
    }
    else if(num1.size() > num2.size()) {
        if(positiveSignNum1 == true && positiveSignNum2 == true) {
            return 1;
        }
        else if(positiveSignNum1 == false && positiveSignNum2 == false) {
            return -1;
        }
    }
    else {
        for(int i = 0, j = 0; i < num1.size() && j < num2.size(); i++, j++) {
            if(num1[i] < num2[j]) {
                if(positiveSignNum1 == true && positiveSignNum2 == true) {
                    return -1;
                }
                else if(positiveSignNum1 == false && positiveSignNum2 == false) {
                    return 1;
                }
            }
            else if(num1[i] > num2[j]) {
                if(positiveSignNum1 == true && positiveSignNum2 == true) {
                    return 1;
                }
                else if(positiveSignNum1 == false && positiveSignNum2 == false) {
                    return -1;
                }
            }
        }
        return 0;
    }
}
