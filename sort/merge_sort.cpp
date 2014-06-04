int do_merge_sort(int A[], int left, int right) {
    if(left >= right) {
        return 0;
    }
    int mid = (right + left) / 2;
    do_merge_sort(A, left, mid);
    do_merge_sort(A, mid + 1, right);
    int* tmp = new int[right - left + 1];
    for(int i = left, j = mid + 1, k = 0; k <= right - left; k++) {
        if(i <= mid && j > right) {
            tmp[k] = A[i++];
            continue;              // Don't forget continue!
        }
        else if(i > mid && j <= right) {
            tmp[k] = A[j++];
            continue;              // Don't forget continue!
        }
        if(A[i] < A[j]) {
            tmp[k] = A[i++];
        }
        else {
            tmp[k] = A[j++];
        }
    }
    for(int i = left, k = 0; i <= right; i++, k++) {
        A[i] = tmp[k];
    }
    delete(tmp);
    return 0;
}

int merge_sort(int A[], int n) {
    do_merge_sort(A, 0, n - 1);
    return 0;
}
