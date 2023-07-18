#ifndef QUEUE_H
#define QUEUE_H

#include <mutex>
#include <exception>

template<typename T>
class Queue {
private:
    struct Node {
        T value;
        Node* next;
        Node(const T& val);
    };
    Node* head;
    Node* tail;
    std::mutex mutex_;
public:
    Queue();
    ~Queue();
    T pop();
    void push(const T& val);
    int size() const;
    bool empty() const;
};

#include "queue.cpp"

#endif
