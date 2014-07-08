#include <iostream>
#include <algorithm>
#include <iterator>
#include <string.h>

using namespace std;

extern int make_a_heap(int* A, int n, int (*recover_heap)(int*, int, int));
extern int recover_min_heap(int Heap[], int parent_index, int n);
extern int recover_max_heap(int Heap[], int parent_index, int n);
extern int sort_a_heap(int* A, int n, int (*recover_heap)(int*, int, int));
