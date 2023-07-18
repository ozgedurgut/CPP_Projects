#include "queue.h"

template<typename T>
Queue<T>::Node::Node(const T& val) : value(val), next(nullptr) {}

template<typename T>
Queue<T>::Queue() : head(nullptr), tail(nullptr) {}

template<typename T>
Queue<T>::~Queue() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename T>
T Queue<T>::pop() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (!head) {
        throw std::runtime_error("Queue is empty");
    }
    T val = head->value;
    Node* temp = head;
    head = head->next;
    if (!head) {
        tail = nullptr;
    }
    delete temp;
    return val;
}

template<typename T>
void Queue<T>::push(const T& val) {
    std::lock_guard<std::mutex> lock(mutex_);
    Node* newNode = new Node(val);
    if (!tail) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

template<typename T>
int Queue<T>::size() const {
    std::lock_guard<std::mutex> lock(mutex_);
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}

template<typename T>
bool Queue<T>::empty() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return !head;
}
