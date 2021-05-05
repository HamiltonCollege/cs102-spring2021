/**
 * Lecture 26: Binary Search Trees
 * @file bst.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date May 4, 2021
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node * left;
    Node * right;
};

class BinarySearchTree {
public:
    BinarySearchTree() {
        _root = nullptr;
    }

    void add(const int key) {
        recursive_add(_root, key);
        cout << "Root key is: " << _root->data << endl;
        if (_root->left != nullptr)
            cout << "Root.left key is: " << _root->left->data << endl;
    }

    bool find(const int key) {
        return false;
    }

    size_t height() const {
        return 0;
    }

    void inorder_print() const {

    }
private:
    void recursive_add(Node * & root, const int key) {
        if (root == nullptr) {
            root = new Node;
            root->data = key;
            root->left = nullptr;
            root->right = nullptr;
            return;
        }
        if (key < root->data) {
            recursive_add(root->left, key);
        } else {
            recursive_add(root->right, key);
        }
    }

    Node * _root;
};

// Controls execution of program
int main() {
    srand(time(0));
    BinarySearchTree bst;
    bst.add(1);
    bst.add(0);
    return 0;
}
