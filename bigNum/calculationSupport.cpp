#include "calculationSupport.hpp"

int eliminateHeadZeros(string &s) {
    int len = s.size();
    unsigned int zeroCount = 0;
    unsigned int i = 0;
    bool hasSignedFlag = false;
    if(i < len && (s[i] == '+' || s[i] == '-')) {
        i++;
        hasSignedFlag = true;
    }
    for(; i < len && s[i] == '0'; i++) {
        zeroCount++;
    }
    if(hasSignedFlag) {
        s.erase(1, zeroCount);
        if(len != 1 && (s == "+" || s== "-")) {
            s[0] = '0';
        }
    }
    else {
        s.erase(0, zeroCount);
        if(len != 0 && s == "") {
            s += '0';
        }
    }
    return 0;
}

bool checkNum(string &s) {
    int index = 0;
    if(index < s.size() && (s[index] == '+' || s[index] == '-')) {
        index++;
    }
    while(index < s.size()) {
        if(s[index] < '0' || s[index] > '9') {
            return true;
        }
        index++;
    }
    return false;
}

int reverseString(string &s) {
    for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
        s[i] ^= s[j];
        s[j] ^= s[i];
        s[i] ^= s[j];
    }
    return 0;
}

int aligningString(string &num1, string &num2) {
    int num1_len = num1.size();
    int num2_len = num2.size();
    if(num1_len < num2_len) {
        for(int i = 0; i < num2_len - num1_len; i++) {
            num1 += '0';
        }
    }
    else {
        for(int i = 0; i < num1_len - num2_len; i++) {
            num2 += '0';
        }
    }
    return 0;
}

bool detectingSignFlag(string &num) {
    if(num[0] == '+') {
        num.erase(0, 1);
        return true;
    }
    else if(num[0] == '-') {
        num.erase(0, 1);
        return false;
    }
    // Remember this, there maybe no '+' or '-'
    else {
        return true;
    }
}
