int recover_heap(int Heap[], int parent_index, int n) {
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

int heap_sort(int A[], int n) {
    if(n <= 0) {
        return -1;
    }
    int* Heap = new int[n];
    for(int i = 0; i < n; i++) {
        Heap[i] = A[i];
    }
    int parent_index = (n - 1) / 2;
    while(parent_index >= 0) {
        recover_heap(Heap, parent_index, n);
        parent_index--;
    }
    for(int i = n; i > 0; i--) {
        A[n - i] = Heap[0];
        int tmp_exchange = Heap[0];
        Heap[0] = Heap[i - 1];
        Heap[i - 1] = tmp_exchange;
        recover_heap(Heap, 0, i - 1);            // Don't forget the i should minus 1
    }
    delete Heap;
    return 0;
}
