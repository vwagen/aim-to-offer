int shell_sort(int A[], int n) {
    int tmp_exchange;
    for(int gap = n / 2; gap > 0; gap /= 2) {
        for(int i = 0; i < gap; i++) {
            /*-------------- Insertion sort --------------*/
            for(int j = i; j < n; j += gap) {
                for(int k = j; k > i && A[k - gap] > A[k]; k -= gap) {
                    tmp_exchange = A[k - gap];
                    A[k - gap] = A[k];
                    A[k] = tmp_exchange;
                }
            }
            /*-------------- Insertion sort --------------*/
        }
    }
    return 0;
}
