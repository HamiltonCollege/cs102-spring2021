/**
 * The SinglyLinkedList class
 * @file list.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 13, 2021
 */
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node * next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList();
    size_t size() const;
    //int get(const size_t index) const;
    //void set(const size_t index, const int data);
    void add(const size_t index, const int data);
    //void remove(const size_t index);
    void print() const;
private:
    void add_first(Node * baby);
    void add_after(Node * previous_node, Node * baby);
    Node * get_node(const size_t index) const;
    Node * _head;
    Node * _tail;
    size_t _size;
};

/**
 * Create an empty linked list
 */
SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

/**
 * Return the number of elements stored in the linked list
 */
size_t SinglyLinkedList::size() const {
    return _size;
}

/**
 * Print out the linked list in a visually pleasing format
 */
void SinglyLinkedList::print() const {
    Node * current_node = _head;
    while (current_node != nullptr) {
        cout << current_node->data << " -> ";
        current_node = current_node->next;
    }
    cout << endl;
}

/**
 * Get the Node at the given index of the linked list (a helper function)
 * @param index the index of the Node to return
 * @return (a pointer to) the Node at the given index.
 */
Node * SinglyLinkedList::get_node(const size_t index) const {
    Node * current_node = _head;
    for (size_t current_index = 0; current_index < index; current_index++) {
        current_node = current_node->next;
    }
    return current_node;
}

/**
 * Add the given data to the linked list so that it appears at the given index.
 * This displaces the nodes after it to be later in the linked list.
 * @param index The index to place the given data.
 * @param data The data to place at the index.
 */
void SinglyLinkedList::add(const size_t index, const int data) {
    // Step 1: create node containing data
    // Use dynamic memory allocation so baby's memory is not deleted when goes out of scope
    Node * baby = new Node;
    baby->data = data;
    baby->next = nullptr;

    if (index == 0) {
        add_first(baby);
    } else {
        add_after(get_node(index - 1), baby);
    }
}

/**
 * Add the given Node to the beginning of the linked list (a helper function)
 * @param baby The Node to add to the beginning of the linked list.
 */
void SinglyLinkedList::add_first(Node * baby) {
    baby->next = _head;
    _head = baby;
    if (_tail == nullptr) {
        _tail = baby;
    }
    _size++;
}

/**
 * Add the given Node to the linked list after the specified Node.
 * @param previous_node The Node to precede the new Node in the linked list
 * @param baby The Node to add to the list.
 */
void SinglyLinkedList::add_after(Node * previous_node, Node * baby) {
    baby->next = previous_node->next;
    previous_node->next = baby;
    if (previous_node == _tail) {
        _tail = baby;
    }
    _size++;
}

// Controls operation of program
int main() {
    SinglyLinkedList singly_linked_list;
    for (int data = 2; data >= 0; data--) {
        singly_linked_list.add(0, data);
    }
    singly_linked_list.print();
    singly_linked_list.add(0, 42);
    singly_linked_list.print();
    singly_linked_list.add(2, 99);
    singly_linked_list.print();
    singly_linked_list.add(5, 100);
    singly_linked_list.print();
    return 0;
}
