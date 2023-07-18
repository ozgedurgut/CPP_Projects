#include "LRUCache.h"

LRUCache::LRUCache(int cap) {
    capacity = std::min(cap, 1000);
    head = nullptr;
    tail = nullptr;
}

int LRUCache::get(int key) {
    if (mp.find(key) != mp.end()) {
        Node* node = mp[key];
        move_to_head(node);
        return node->value;
    }
    return -1;
}

void LRUCache::set(int key, int value) {
    if (key < 1 || key > 20 || value < 1 || value > 2000) {
        return;
    }
    if (mp.find(key) != mp.end()) {
        Node* node = mp[key];
        node->value = value;
        move_to_head(node);
    }
    else {
        Node* new_node = new Node(key, value);
        if (mp.size() == capacity) {
            remove_tail();
        }
        mp[key] = new_node;
        if (!head) {
            head = new_node;
            tail = new_node;
        }
        else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }
}

void LRUCache::move_to_head(Node* node) {
    if (node == head) {
        return;
    }
    else if (node == tail) {
        tail = tail->prev;
        tail->next = nullptr;
    }
    else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    node->prev = nullptr;
    node->next = head;
    head->prev = node;
    head = node;
}

void LRUCache::remove_tail() {
    mp.erase(tail->key);
    if (tail == head) {
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
    else {
        tail = tail->prev;
        delete tail->next;
        tail->next = nullptr;
    }
}
