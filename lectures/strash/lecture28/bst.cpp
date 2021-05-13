/**
 * Lecture 28: A templated BinarySearchTree class
 * @file bst.cpp
 * @author Darren Strash
 * @collaborator CS 102-02
 * @date May 11, 2021
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

const size_t NUM_REPETITIONS = 10;

void height_experiment();

template<typename T>
struct Node {
    T data;
    Node * left;
    Node * right;
};

template<typename T>
class BinarySearchTree {
public:
    BinarySearchTree() {
        _root = nullptr;
    }

    ~BinarySearchTree() {
        recursive_clear(_root);
    }

    void add(const T & key) {
        recursive_add(_root, key);
    }

    bool find(const T & key) const {
        return false;
    }

    long height() const {
        return recursive_height(_root);
    }

    void inorder_print() const {
        recursive_inorder_print(_root);
        cout << endl;
    }

    void display() const {
        vector<bool> draw_level;
        draw_level.push_back(false);
        recursive_display(_root, draw_level, 0);
    }

private:
    void recursive_add(Node<T> * & current_node, const T & key) {
        if (current_node == nullptr) {
            current_node = new Node<T>;
            current_node->data = key;
            current_node->left = nullptr;
            current_node->right = nullptr;
            return;
        }
        if (key < current_node->data) {
            recursive_add(current_node->left, key);
        } else {
            recursive_add(current_node->right, key);
        }
    }

    long recursive_height(Node<T> * current_node) const {
        //base case
        if (current_node == nullptr) {
            return -1;
        }

        //recursive case
        return 1 + max(recursive_height(current_node->left),
                       recursive_height(current_node->right));
    }

    void recursive_inorder_print(Node<T> * current_node) const {
        // base case
        if (current_node == nullptr)
            return;

        // recursive case
        recursive_inorder_print(current_node->left);
        cout << current_node->data << " ";
        recursive_inorder_print(current_node->right);
    }

    void recursive_clear(Node<T> * current_node) {
        // base case
        if (current_node == nullptr)
            return;

        // recursive case
        recursive_clear(current_node->left);
        recursive_clear(current_node->right);
        delete current_node;
    }

    void recursive_display(Node<T> * current_node,
                           vector<bool> & draw_level, 
                           const size_t depth) const {
        if (current_node == nullptr)
            return;
        else {
            for (size_t level = 0; level < depth; level++) {
                if (draw_level[level])
                    cout << "|  ";
                else
                    cout << "   ";
            }
            cout << "|--";
            cout << current_node->data << endl;
            draw_level.push_back(current_node->left != nullptr);
            recursive_display(current_node->right, draw_level, depth + 1);
            draw_level.pop_back();
            draw_level.push_back(false);
            recursive_display(current_node->left, draw_level, depth + 1);
            draw_level.pop_back();
        }
    }

    Node<T> * _root;
};

// Controls execution of program
int main() {
    srand(time(0));
   
    // Construct BST
    BinarySearchTree<string> bst;
    bst.add("abc");
    bst.add("def");

    // Print tree + additional information
    bst.display();
    cout << "Height of tree: " << bst.height() << endl;
    cout << "Contents in order: ";
    bst.inorder_print();
    return 0;
}
