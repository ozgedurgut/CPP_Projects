#include <iostream>
#include <unordered_map>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CachedLinkedList {
private:
    int capacity;
    Node* head;
    Node* tail;
    unordered_map<int, Node*> cache;

public:
    CachedLinkedList(int capacity) {
        this->capacity = capacity;
        this->head = nullptr;
        this->tail = nullptr;
    }

    void addData(int data) {
        auto it = cache.find(data);
        if (it != cache.end()) {
            Node* existingNode = it->second;
            if (existingNode == tail) {
                return;
            }
            if (existingNode == head) {
                head = head->next;
            }
            else {
                existingNode->next->next = existingNode;
            }
            tail->next = existingNode;
            tail = existingNode;
        }
        else {
            Node* newNode = new Node(data);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
                if (cache.size() == capacity) {
                    cache.erase(head->data);
                    head = head->next;
                }
            }
            cache[data] = newNode;
        }
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    CachedLinkedList list(3);
    list.addData(1);
    list.addData(2);
    list.addData(3);
    list.addData(4);
    list.addData(2);
    list.addData(5);
    list.printList(); // output: 4 2 5
    return 0;
}
