int recover_min_heap(int Heap[], int parent_index, int n) {
    int left_child_index = parent_index * 2 + 1;
    int right_child_index = parent_index * 2 + 2;
    int tmp_exchange;
    while(left_child_index < n || right_child_index < n) {
        if(right_child_index == n) {
            right_child_index = left_child_index;
        }
        int min_child_index;
        if(Heap[left_child_index] <= Heap[right_child_index]) {
            min_child_index = left_child_index;
        }
        else {
            min_child_index = right_child_index;
        }
        if(Heap[parent_index] > Heap[min_child_index]) {        // Don't forget to compare this two value
            tmp_exchange = Heap[parent_index];
            Heap[parent_index] = Heap[min_child_index];
            Heap[min_child_index] = tmp_exchange;
        }
        parent_index = min_child_index;
        left_child_index = parent_index * 2 + 1;
        right_child_index = parent_index * 2 + 2;
    }
    return 0;
}

int recover_max_heap(int Heap[], int parent_index, int n) {
    int left_child_index = parent_index * 2 + 1;
    int right_child_index = parent_index * 2 + 2;
    int tmp_exchange;
    while(left_child_index < n || right_child_index < n) {
        if(right_child_index == n) {
            right_child_index = left_child_index;
        }
        int max_child_index;
        if(Heap[left_child_index] <= Heap[right_child_index]) {
            max_child_index = right_child_index;
        }
        else {
            max_child_index = left_child_index;
        }
        if(Heap[parent_index] < Heap[max_child_index]) {        // Don't forget to compare this two value
            tmp_exchange = Heap[parent_index];
            Heap[parent_index] = Heap[max_child_index];
            Heap[max_child_index] = tmp_exchange;
        }
        parent_index = max_child_index;
        left_child_index = parent_index * 2 + 1;
        right_child_index = parent_index * 2 + 2;
    }
    return 0;
}

int make_a_heap(int* A, int n, int (*recover_heap)(int*, int, int)) {
    if(n <= 0) {
        return -1;
    }
    int parent_index = (n - 1) / 2;
    while(parent_index >= 0) {
        recover_heap(A, parent_index, n);
        parent_index--;
    }
    return 0;
}

int sort_a_heap(int* A, int n, int (*recover_heap)(int*, int, int)) {
    if(n <= 0) {
        return -1;
    }
    for(int i = n; i > 0; i--) {
        int tmp = A[i - 1];
        A[i - 1] = A[0];
        A[0] = tmp;
        recover_heap(A, 0, i - 1);            // Don't forget the i should minus 1
    }
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
    return 0;
}
