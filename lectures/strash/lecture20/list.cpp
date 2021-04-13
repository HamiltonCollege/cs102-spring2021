#include <iostream>

using namespace std;

// List Interface (what methods do, but not how they do it).
/*
class List {
public:
    size_t size() const;
    int get(const size_t index) const;
    void set(const size_t index, const int data);
    void add(const size_t index, const int data);
    void remove(const size_t index);
};
 */

struct Node {
    int data;
    Node * next;
};

// SinglyLinkedList is an implementation of the List interface.
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

// create an empty linked list

//  nullptr  nullptr
//  ^ head   ^ tail
SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

size_t SinglyLinkedList::size() const {
    return _size;
}

// Ex: | 0 | -> | 1 | -> | 2 | ->
//       ^ head            ^ tail

void SinglyLinkedList::print() const {
    Node * current_node = _head;
    while (current_node != nullptr) {
        cout << current_node->data << " -> ";
        current_node = current_node->next;
    }
    cout << endl;
}

Node * SinglyLinkedList::get_node(const size_t index) const {
    Node * current_node = _head;
    for (size_t current_index = 0; current_index < index; current_index++) {
        current_node = current_node->next;
    }
    return current_node;
}

// Behavior of add:

// Ex: | 0 | -> | 1 | -> | 2 | ->
//       ^ head            ^ tail
// execute add(0, 42)
// Step 1: create a node    | 42 | ->
// After: | 42 | -> | 0 | -> | 1 | -> | 2 | ->
//          ^ head    ^ previous        ^ tail
// execute add(2, 99)
// After: | 42 | -> | 0 | -> | 99 | -> | 1 | -> | 2 | ->
//          ^ head    ^ previous ^ baby           ^ tail

void SinglyLinkedList::add(const size_t index, const int data) {
    // Step 1: create node containing data
    // Use dynamic memory allocation so baby's memory is not deleted when goes out of scope
    Node * baby = new Node;
    baby->data = data;
    baby->next = nullptr;

    if (index == 0) {
        add_first(baby);
    } else {
        // Compute previous_node
        Node * previous_node = get_node(index - 1);
        cout << "Data in previous node: " << previous_node->data << endl;
        add_after(previous_node, baby);
    }
}

// Ex: | 0 | -> | 1 | -> | 2 | ->
//       ^ head            ^ tail
// execute add_first(baby)
// After: baby -> | 0 | -> | 1 | -> | 2 | ->
//         ^ head                     ^ tail

// Case: what happens if empty?
//    nullptr nullptr
//    ^ head  ^ tail
// After:
//     baby
//     ^ head, tail
void SinglyLinkedList::add_first(Node * baby) {
    baby->next = _head; // very first add _head = nullptr
    _head = baby;
    if (_tail == nullptr) {
        _tail = baby;
    }
    _size++;
}

// After: | 42 | -> | 0 | -> | 1 | -> | 2 | ->
//          ^ head    ^ previous        ^ tail
// execute add(2, 99)
// After: | 42 | -> | 0 | -> | 99 | -> | 1 | -> | 2 | ->
//          ^ head    ^ previous ^ baby           ^ tail
// add(5, 100);
// After: | 42 | -> | 0 | -> | 99 | -> | 1 | -> | 2 | -> | 100 | ->
//          ^ head                                ^ previous ^ baby, tail
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
    SinglyLinkedList sll;
    /*
    for (size_t data = 10; data > 0; data--) {
        sll.add(0, data);
        cout << "Adding " << data << " to front" << endl;
        sll.print();
    }
    */
    for (int data = 2; data >= 0; data--) {
        sll.add(0, data);
    }
    sll.print();
    sll.add(0, 42);
    sll.print();
    sll.add(2, 99);
    sll.print();
    sll.add(5, 100);
    sll.print();

    //sll.add(10, 999999); // segmentation fault

    cout << "Size of linked list is: " << sll.size() << endl;
    return 0;
}
