/**
 * Illustrate the running time of Queue operations on singly-linked list
 * implementations and an array-based implementation.
 * @file queue.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 27, 2021
 */
#include <iostream>
#include <iomanip>
#include <chrono>
#include <cstring>
#include <vector>
#include "SinglyLinkedList.h"

using namespace std;

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

class SLLBasedQueueSlow : public Queue {
public:
    size_t size() const {
        return _list.size();
    }
    int front() const {
        return _list.get(_list.size() - 1);
    }
    void enqueue(const int element) {
        _list.add(0, element);
    }
    int dequeue() {
        const int element_to_return = front();
        _list.remove(_list.size() - 1);
        return element_to_return;
    }
private:
    SinglyLinkedList _list;
};

class ArrayBasedQueue : public Queue {
public:
    ArrayBasedQueue() {
        _size = 0;
        _capacity = 10;
        _front = _capacity;
        _vector.resize(_capacity);
    }
    size_t size() const {
        return _size;
    }
    int front() const {
        return _vector[_front];
    }
    void enqueue(const int element) {
        if (_front == _capacity) {
            _front--;
        }
        if (_size > _front) {
            _capacity = 2 * _capacity;
            _vector.resize(_capacity);
            size_t move_index = _capacity - 1;
            for (long int index = _front; index >= 0; index--) {
                _vector[move_index--] = _vector[index];
            }
            _front = _capacity - 1;
        }
        _vector[_front - _size] = element;
        _size++;
    }
    int dequeue() {
        const int element_to_return = front();
        if (_front == 0) {
            _front = _capacity;
        } else {
            _front--;
        }
        _size--;
        return element_to_return;
    }
    void print() const {
        size_t element_num = 0;
        for (size_t index = _front; element_num < _size; index--) {
            cout << _vector[index] << " ";
            element_num++;
        }
        cout << endl;
    }
private:
    std::vector<int> _vector;
    size_t _size;
    size_t _capacity;
    size_t _front;
};

/**
 * Enqueue n elements and then dequeue them all.
 * @param queue An implementation of Queue
 * @param n the number of elements to enqueue and dequeue
 */
void fill_and_empty(Queue & queue, const size_t n) {
    for (size_t element = 0; element < n; element++)
        queue.enqueue(element);
    while (queue.size() > 0) {
        queue.dequeue();
    }
}

/**
 * Return the time to perform the same number of enqueues and dequeues
 * @param queue (a reference to) a Queue-derived object on which to run the operations.
 * @param num_elements the number of elements to enqueue and dequeue
 * @return the time in milliseconds of the enqueues and dequeues
 */
double time_queue_operations(Queue & queue, const size_t num_elements) { 
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = 
        std::chrono::high_resolution_clock::now();

    fill_and_empty(queue, num_elements);

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = 
        std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> run_time = end_time - start_time;
    return chrono::duration_cast<chrono::milliseconds>(run_time).count();
}

/**
 * Print a table of running times for queue operations for increasing powers of two
 * @param queue The queue to test.
 */
void time_experiment(Queue & queue) {
    cout << "Legend:" << endl;
    cout << "    n    - the number of elements in the queue" << endl;
    cout << "    time - the running time (in ms) of n enqueues and dequeues" << endl;
    cout << setw(10) << "n" << setw(10) << "time" << endl;
    for (size_t size = 1; size < 100000000; size *= 2) {
        cout << setw(10) << size << setw(10) << time_queue_operations(queue, size) << endl;
    }
}

/**
 * Print a table of comparing running times for queue operations for increasing powers of two
 * for two given Queue-derived objects.
 * @param queue1 (a reference to) the first Queue
 * @param name1 the name of the first Queue, for printing
 * @param queue2 (a reference to) the second Queue
 * @param name2 The name of the second queue for printing
 */
void time_experiment(Queue & queue1, const string & name1,
                     Queue & queue2, const string & name2) {
    cout << "Legend:" << endl;
    cout << "    n    - the number of elements in the queue" << endl;
    cout << "    " << name1 << " - the running time (in ms) of n " << name1 << " enqueues and dequeues" << endl;
    cout << "    " << name2 << " - the running time (in ms) of n " << name2 << " enqueues and dequeues" << endl;
    cout << setw(10) << "n" << setw(10) << name1 << setw(10) << name2 << endl;
    for (size_t size = 1; size < 100000000; size *= 2) {
        cout << setw(10) << size 
             << setw(10) << time_queue_operations(queue1, size)
             << setw(10) << time_queue_operations(queue2, size)
             << endl;
    }
}

// Controls operation of program
int main(int argc, char ** argv) {

    // All of the enqueues and dequeues take linear time!
    //SLLBasedQueue queue;
    //time_experiment(queue);

    // Compare to a slower version of queues with singly-linked list
    //SLLBasedQueue fast;
    //SLLBasedQueueSlow slow;
    //time_experiment(fast, "fast", slow, "slow");

    // Compare a singly-linked list implementation of Queue, to an array-based implementation
    SLLBasedQueue sll;
    ArrayBasedQueue array;
    time_experiment(sll, "sll", array, "array");

    // We used this code to test enqueue and dequeue on arrays.
    /*for (size_t element = 0; element < 10; element++) {
        queue.enqueue(element);
        queue.print();
    }

    // Force the elements to shift in the array so that front moves and needs to be reset.
    cout << "Start dequeueing..." << endl;
    for (size_t element = 42; element < 100; element++) {
        queue.enqueue(element);
        queue.dequeue();
        queue.print();
    }*/

    return 0;
}
