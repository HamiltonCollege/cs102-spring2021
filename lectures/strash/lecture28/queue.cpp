/**
 * Lecture 28: A Queue implementation with templates.
 * @file queue.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date May 11, 2021
 */
#include <iostream>
#include <iomanip>
#include <chrono>
#include <cstring>
#include <vector>
#include <list>

using namespace std;

template<typename T, typename Container>
class Queue {
public:
    virtual size_t size() const {
        return _container.size();
    }
    virtual const T & front() const {
        return _container.front();
    }
    virtual void enqueue(const T & element) {
        _container.push_back(element);
    }
    virtual T dequeue() {
        T data = _container.front();
        _container.pop_front();
        return data;
    }
private:
    Container _container;
};

/*
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
 */

// Controls operation of program
int main() {

    // A singly-linked list implementation of Queue
    Queue<int,list<int>> queue;


    // We used this code to test enqueue and dequeue on.
    for (size_t element = 0; element < 10; element++) {
        queue.enqueue(element);
    }

    // Force the elements to shift in the array so that front moves and needs to be reset.
    cout << "Start dequeueing..." << endl;
    while (queue.size() != 0) {
        cout << queue.dequeue() << " ";
    }
    cout << endl;

    return 0;
}
