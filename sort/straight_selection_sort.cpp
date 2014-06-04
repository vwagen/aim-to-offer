int straight_seletion_sort(int A[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i; j < n; j++) {
            min = A[min] <= A[j] ? min : j;
        }
        int tmp_exchange;
        if(min != i) {
            tmp_exchange = A[min];
            A[min] = A[i];
            A[i] = tmp_exchange;
        }
    }
    return 0;
}
