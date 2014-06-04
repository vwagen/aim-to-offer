int insert_sort(int A[], int n) {
    int tmp_exchange;
    for(int i = 0; i < n; i++) {
        for(int j = i; j > 0 && A[j - 1] > A[j]; j--) {
            tmp_exchange = A[j - 1];
            A[j - 1] = A[j];
            A[j] = tmp_exchange;
        }
    }
    return 0;
}
