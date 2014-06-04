bool exchange(int A[], int left, int right) {
    int tmp_exchange;
    if(left < right) {
        tmp_exchange = A[right];
        A[right] = A[left];
        A[left] = tmp_exchange;
        return false;
    }
    else {
        return true;
    }
}
int do_quick_sort(int A[], int left_bound, int right_bound) {
    if(left_bound >= right_bound) {
        return -1;
    }
    int tmp = A[left_bound];
    int left = left_bound;
    int right = right_bound;
    while(1) {
        while(left < right && A[right] > tmp) {
            right--;
        }
        if(exchange(A, left, right)) {
            break;
        }
        while(left < right && A[left] <= tmp) {
            left++;
        }
        if(exchange(A, left, right)) {
            break;
        }
    }
    A[left] = tmp;
    if(left - left_bound < right_bound - right) {
        do_quick_sort(A, left_bound, left - 1);
        do_quick_sort(A, right + 1, right_bound);
    }
    else {
        do_quick_sort(A, right + 1, right_bound);
        do_quick_sort(A, left_bound, left - 1);
    }
    return 0;
}

int quick_sort(int A[], int n) {
    do_quick_sort(A, 0, n - 1);
    return 0;
}
