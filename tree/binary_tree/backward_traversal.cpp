#include <iostream>
#include <stack>
#include "tree_node.hpp"
using namespace std;

typedef struct {
    Node* node;
    bool right_checked;
} RightChecked;

int backward(Node* node) {
    stack<RightChecked> node_stack;
    while(1) {
        if(node != NULL) {
            RightChecked tmp = {node, false};
            node_stack.push(tmp);
            node = node -> left;
        }
        else {
            if(node_stack.size() == 0) {
                cout << endl;
                return 0;
            }
            RightChecked tmp = node_stack.top();
            node_stack.pop();
            if(tmp.right_checked) {
                cout << tmp.node -> val << " ";
            }
            else {
                node = tmp.node -> right;
                tmp.right_checked = true;
                node_stack.push(tmp);
            }
        }
    }
}
