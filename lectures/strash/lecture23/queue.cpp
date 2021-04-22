#include <iostream>
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
    size_t size() const;
    int front() const;
    void enqueue(const int element);
    int dequeue();
private:
    SinglyLinkedList _list;
};

size_t SLLBasedQueue::size() const {
    return _list.size();
}

int SLLBasedQueue::front() const {
    return _list.get(0);
}

void SLLBasedQueue::enqueue(const int element) {
    _list.add(size(), element);
}

int SLLBasedQueue::dequeue() {
    const int element_to_return = front();
    _list.remove(0);
    return element_to_return;
}


int main() {
    //Make a queue called queue;
    SLLBasedQueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    cout << "Dequeueing: " << queue.dequeue() << endl;
    cout << "Dequeueing: " << queue.dequeue() << endl;
    cout << "Dequeueing: " << queue.dequeue() << endl;
    return 0;
}
