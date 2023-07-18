#ifndef LRUCACHE_H
#define LRUCACHE_H

#include "cache.h"
#include "node.h"

class LRUCache : public Cache {
public:
    LRUCache(int cap);
    int get(int key);
    void set(int key, int value);
private:
    Node* head;
    Node* tail;
    void move_to_head(Node* node);
    void remove_tail();
    std::map<int, Node*> mp;
    int capacity;
};

#endif  // LRUCACHE_H
