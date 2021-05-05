#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

/**
 * Create an empty linked list
 */
SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

/**
 * Delete any remaining Nodes in the linked list
 */
SinglyLinkedList::~SinglyLinkedList() {
    clear();
}

/**
 * Return the number of elements stored in the linked list
 */
size_t SinglyLinkedList::size() const {
    return _size;
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
 * Return the data stored at the given index
 * @param index the index of the data element
 * @return the data stored at the given index
 */
int SinglyLinkedList::get(const size_t index) const {
    return get_node(index)->data;
}

/**
 * Change the data stored at the given index to the provided data.
 * @param index the index of the data to change
 * @param data the new data
 */
void SinglyLinkedList::set(const size_t index, const int data) {
    get_node(index)->data = data;
}

/**
 * Add the given Node to the beginning of the linked list (a helper function)
 * @param baby The Node to add to the beginning of the linked list.
 */
void SinglyLinkedList::add_first(Node * baby) {
    baby->next = _head;
    _head = baby;
    if (_tail == nullptr)
        _tail = _head;
    _size++;
}

/**
 * Add the given Node to the linked list after the specified Node (a helper method).
 * @param previous_node The Node to precede the new Node in the linked list
 * @param baby The Node to add to the list.
 */
void SinglyLinkedList::add_after(Node * previous_node, Node * baby) {
    baby->next = previous_node->next;
    previous_node->next = baby;
    if (previous_node == _tail)
        _tail = baby;
    _size++;
}

/**
 * Add the given Node to the end of the linked list
 * @param baby The Node to add to the list.
 */
void SinglyLinkedList::add_last(Node * baby) {
    if (_tail == nullptr) {
        _tail = baby;
        _head = baby;
    } else {
        _tail->next = baby;
        _tail = baby;
    }
    _size++;
}

/**
 * Add the given data to the linked list so that it appears at the given index.
 * This displaces the nodes after it to be later in the linked list.
 * @param index The index to place the given data.
 * @param data The data to place at the index.
 */
void SinglyLinkedList::add(const size_t index, const int data) {
    Node * baby = new Node;
    baby->next = nullptr;
    baby->data = data;

    if (index == 0)
        add_first(baby);
    else if (index == _size)
        add_last(baby);
    else 
        add_after(get_node(index - 1), baby);
}

/**
 * Remove the first Node from the linked list (a helper function)
 */
void SinglyLinkedList::remove_first() {
    Node * saved = _head;
    _head = _head->next;

    if (_head == nullptr)
        _tail = nullptr;

    _size--;
    delete saved;
}

/**
 * Remove the Node appearing after previous_node in the linked list (a helper function)
 * @param previous_node the Node appearing before the one we want to remove.
 */
void SinglyLinkedList::remove_after(Node * previous_node) {
    Node * removed = previous_node->next;
    previous_node->next = removed->next;

    if (removed == _tail)
        _tail = previous_node;

    _size--;
    delete removed;
}

/**
 * Remove the element stored in the given index of the linked list
 * @param index the index of the element we wish to remove.
 */
void SinglyLinkedList::remove(const size_t index) {
    if (index == 0) {
        remove_first();
        return;
    }
    remove_after(get_node(index - 1));
}

/**
 * Delete all of the Nodes in the linked list
 */
void SinglyLinkedList::clear() {
    while (_head != nullptr) {
        remove_first();
    }
}

/**
 * Read the data into the linked list from the given input stream
 * @param input_stream the input stream to read from
 */
void SinglyLinkedList::read(istream & input_stream) {
    clear();
    while (input_stream.peek() != '\n') {
        int read_int = 0;
        input_stream >> read_int;
        add(_size, read_int);
    }
}

/**
 * Write the linked list data to the given output stream
 * @param output_stream the output stream to write to 
 */
void SinglyLinkedList::write(ostream & output_stream) const {
    Node * current_node = _head;
    if (current_node != nullptr) {
        output_stream << current_node->data;
        current_node = current_node->next;
    }

    while (current_node != nullptr) {
        output_stream << " " << current_node->data;
        current_node = current_node->next;
    }
    output_stream << endl;
}

/**
 * A copy constructor for the linked list
 * @param other the linked list to copy from
 */
SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList & other) {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;

    Node * current_node = other._head;
    while (current_node != nullptr) {
        this->add(_size, current_node->data);
        current_node = current_node->next;
    }
}
