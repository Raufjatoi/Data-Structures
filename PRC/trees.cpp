#include <iostream>
#include <iomanip> // For setw (to control spacing)
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to create a sample tree
Node* createTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return root;
}

// Function to print tree in a tree-like form
void printTree(Node* root, int space = 0, int height = 10) {
    if (root == nullptr) return;

    // Increase the distance between levels
    space += height;

    // Process right child first
    printTree(root->right, space);

    // Print current node after space count
    cout << endl;
    cout << setw(space) << root->data << endl;

    // Process left child
    printTree(root->left, space);
}

int main() {
    Node* root = createTree();

    cout << "Tree Structure:" << endl;
    printTree(root);

    return 0;
}
