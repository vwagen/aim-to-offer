#include "rearrangeArray.hpp"


int rearrangeArray(int A[], int n, bool (*checkNum)(int)) {
    int left = 0;
    int right = n - 1;
    while(left < right) {
        while(left < right && checkNum(A[left])) {
            left++;
        }
        while(left < right && !checkNum(A[right])) {
            right--;
        }
        swap(A[left], A[right]);
    }
    return 0;
}

int swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    return 0;
}


int main() {
    int Test[100];
    cout << "How many digits you will input(less than 100): " << endl;
    int len = 0;
    cin >> len;
    for(int i = 0; i < len; i++) {
        cin >> Test[i];
    }
    copy(Test, Test + len, ostream_iterator<int>(cout, " "));
    cout << endl;
    rearrangeArray(Test, len, isNegative);
    copy(Test, Test + len, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}

