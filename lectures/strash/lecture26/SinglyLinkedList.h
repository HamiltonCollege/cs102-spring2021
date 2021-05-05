#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H
#include <iostream>

struct Node {
    int data;
    Node * next;
};

class SinglyLinkedList {
private:
    Node * _head;
    Node * _tail;
    size_t _size;
public:
    // lifecycle methods
    SinglyLinkedList();
    SinglyLinkedList(const SinglyLinkedList & other);
    ~SinglyLinkedList();
    // methods from the List interface
    size_t size() const;
    int get(const size_t index) const;
    void set(const size_t index, const int data);
    void add(const size_t index, const int data);
    void remove(const size_t index);
    void read(std::istream & input_stream);
    void write(std::ostream & output_stream) const;
private:
    // helper methods
    Node * get_node(const size_t index) const;
    void add_first(Node * baby);
    void add_last(Node * baby);
    void add_after(Node * previous_node, Node * baby);
    void remove_first();
    void remove_after(Node * previous_node);
    void clear();
};

#endif // SINGLYLINKEDLIST_H
