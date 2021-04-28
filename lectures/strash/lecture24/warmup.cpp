/**
 * Warmup for April 27, 2021.
 * @file queue.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 27, 2021
 */
#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

// What is the running time of fill_and_empty in terms of n (for SLLBasedQueue)?

class Queue {
public:
    virtual size_t size() const = 0;
    virtual int front() const = 0;
    virtual void enqueue(const int element) = 0;
    virtual int dequeue() = 0;
};

class SLLBasedQueue : public Queue {
public:
    size_t size() const {
        return _list.size();
    }
    int front() const {
        return _list.get(0);
    }
    void enqueue(const int element) {
        _list.add(size(), element);
    }
    int dequeue() {
        const int element_to_return = front();
        _list.remove(0);
        return element_to_return;
    }
private:
    SinglyLinkedList _list;
};

void fill_and_empty(Queue & queue, const size_t n) {
    for (size_t element = 0; element < n; element++)
        queue.enqueue(element);

    while (queue.size() > 0) {
        queue.dequeue();
    }
}

// Control execution of program
int main() {
    SLLBasedQueue sll_queue;
    fill_and_empty(sll_queue, 34);
    return 0;
}