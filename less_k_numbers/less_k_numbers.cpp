#include "less_k_numbers.hpp"

int main() {
    int A[] = {11, 3, 12, 8, 4, 5, 10, 6, 2, 7, 1, 9};
    int n = sizeof(A) / sizeof(int);
    cout << "A:" << endl;
    copy(A, A + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    int k = 5;
    if(k > n) {
        k = n;
    }
    int* Heap = new int[k];
    if(Heap == NULL) {
        return -1;
    }
    memset(Heap, 0, k * sizeof(int));
    for(int i = 0; i < k; i++) {
        Heap[i] = A[i];
    }
    int (*recover_heap)(int*, int, int) = &recover_max_heap;         // Max heap
    make_a_heap(Heap, k, recover_heap);                              // Make a max heap consist of 9 elements
    for(int i = k; i < n; i++) {
        if(A[i] < Heap[0]) {                                         // for Max heap
            Heap[0] = A[i];
            recover_heap(Heap, 0, k);
        }
    }
    sort_a_heap(Heap, k, recover_heap);                              // Sort the heap
    cout << "Less " << k << " numbers:" << endl;
    copy(Heap, Heap + k, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
