int bubble_sort(int A[], int n) {
    int tmp_exchange;
    while(n > 1) {
        for(int i = 0; i < n - 1; i++) {
            if(A[i] > A[i + 1]) {
                tmp_exchange = A[i + 1];
                A[i + 1] = A[i];
                A[i] = tmp_exchange;
            }
        }
        n--;
    }
    return 0;
}
