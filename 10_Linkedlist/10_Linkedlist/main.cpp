#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    void add(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.add(3);
    list.add(7);
    list.add(5);
    list.print();
    return 0;
}
