#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode(int val) {
    Node* n = new Node();
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

Node* insert(Node* root, int val) {
    if (!root) return createNode(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }
    cout << "Inorder traversal: ";
    inorder(root);
}
