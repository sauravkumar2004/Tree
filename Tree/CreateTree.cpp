#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to create a node and construct a binary tree
Node* CreateNode() {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    // Base case for recursion: if input is -1, return nullptr
    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);  // Fix incorrect class instantiation
    cout << "Enter left child of " << data << endl;
    root->left = CreateNode();  // Recursive call for left subtree
    cout << "Enter right child of " << data << endl;
    root->right = CreateNode(); // Recursive call for right subtree

    return root;
}

int main() {
    Node* root = CreateNode();
    if (root) {
        cout << "Root node data: " << root->data << endl;
    } else {
        cout << "The tree is empty." << endl;
    }
}
