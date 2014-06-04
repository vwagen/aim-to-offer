#include "sort.hpp"
using namespace std;

bool check(int A[], int m, int B[]) {
    for(int i = 0; i < m; i++) {
        if(A[i] != B[i]) {
            cout << "Not Match!" << endl;
            return false;
        }
    }
    cout << "Match!" << endl;
    return true;
}
int set_array(int A[], int m, int B[]) {
    for(int i = 0; i < m; i++) {
        A[i] = B[i];
    }
    return 0;
};

int main() {
    int Setting[1000];
    for(int i = 1000; i > 0; i--) {
        Setting[1000 - i] = i;
    }
    int Check[1000];
    for(int i = 0; i < 1000; i++) {
        Check[i] = i + 1;
    }

    //int Bubble[] = {3,3,2,1,1,7,4,4,7,9};
    int Bubble[1000];
    int bubble_n = sizeof(Bubble) / 4;
    set_array(Bubble, bubble_n, Setting);
    //copy(Bubble, Bubble + bubble_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    bubble_sort(Bubble, bubble_n);
    cout << "bubble sort: " << endl;
    check(Bubble, bubble_n, Check);
    //copy(Bubble, Bubble + bubble_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int Insert[] = {3,3,2,1,1,7,4,4,7,9};
    int Insert[1000];
    int insert_n = sizeof(Insert) / 4;
    set_array(Insert, insert_n, Setting);
    //copy(Insert, Insert + insert_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    insert_sort(Insert, insert_n);
    cout << "Insert sort: " << endl;
    check(Insert, insert_n, Check);
    //copy(Insert, Insert + insert_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int Shell[] = {3,3,2,1,1,7,4,4,7,9};
    int Shell[1000];
    int shell_n = sizeof(Shell) / 4;
    set_array(Shell, shell_n, Setting);
    //copy(Shell, Shell + shell_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    shell_sort(Shell, shell_n);
    cout << "Shell sort: " << endl;
    check(Shell, shell_n, Check);
    //copy(Shell, Shell + shell_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int StraightSelection[] = {3,3,2,1,1,7,4,4,7,9};
    int StraightSelection[1000];
    int straight_selection_n = sizeof(StraightSelection) / 4;
    set_array(StraightSelection, straight_selection_n, Setting);
    //copy(StraightSelection, StraightSelection + straight_selection_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    straight_seletion_sort(StraightSelection, straight_selection_n);
    cout << "Straight Selection sort: " << endl;
    check(StraightSelection, straight_selection_n, Check);
    //copy(StraightSelection, StraightSelection + straight_selection_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int Quick[] = {3,3,2,1,1,7,4,4,7,9};
    int Quick[1000];
    int quick_n = sizeof(Quick) / 4;
    set_array(Quick, quick_n, Setting);
    //copy(Quick, Quick + quick_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    quick_sort(Quick, quick_n);
    cout << "Quick sort: " << endl;
    check(Quick, quick_n, Check);
    //copy(Quick, Quick + quick_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int Merge[] = {3,3,2,1,1,7,4,4,7,9};
    int Merge[1000];
    int merge_n = sizeof(Merge) / 4;
    set_array(Merge, merge_n, Setting);
    //copy(Merge, Merge + merge_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    merge_sort(Merge, merge_n);
    cout << "Merge sort: " << endl;
    check(Merge, merge_n, Check);
    //copy(Merge, Merge + merge_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    //int Heap[] = {9,12,17,30,50,20,60,65,4,19};
    int Heap[1000];
    int heap_n = sizeof(Heap) / 4;
    set_array(Heap, heap_n, Setting);
    //copy(Heap, Heap + heap_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    heap_sort(Heap, heap_n);
    cout << "Heap sort: " << endl;
    check(Heap, heap_n, Check);
    //copy(Heap, Heap + heap_n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl << "------------------------------------------" << endl << endl;

    return 0;
}
