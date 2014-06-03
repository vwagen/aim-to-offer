#include <iostream>
#include "tree_node.hpp"
using namespace std;
extern int backward(Node* node);

Node* rebuild_binary_tree(int Fw[], int fn, int Mw[], int mn) {
    if(fn == 0 || mn == 0) {
        return NULL;
    }
    int index = 0;
    for(; index < mn; index++) {
        if(Fw[0] == Mw[index]) {
            break;
        }
    }
    Node* head = new Node(Fw[0]);
    int left_node_num = index;
    int right_node_num = fn - left_node_num - 1;
    if(left_node_num == 0) {
        head -> left = NULL;
    }
    else {
        head -> left = rebuild_binary_tree(&Fw[1], left_node_num, Mw, left_node_num);
    }
    if(right_node_num == 0) {
        head -> right = NULL;
    }
    else {
        head -> right = rebuild_binary_tree(&Fw[left_node_num + 1], right_node_num, &Mw[index + 1], right_node_num);
    }
    return head;
}

int main() {
    //int Fw[] = {1, 2, 4, 7, 3, 5, 6, 8};
    //int Mw[] = {4, 7, 2, 1, 5, 3, 8, 6};
    int Fw[] = {1, 2, 3};
    int Mw[] = {2, 1, 3};
    Node* root = rebuild_binary_tree(Fw, sizeof(Fw) / 4, Mw, sizeof(Mw) / 4);
    backward(root);
    return 0;
}
