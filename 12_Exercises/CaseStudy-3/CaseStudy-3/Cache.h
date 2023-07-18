#ifndef CACHE_H
#define CACHE_H

#include <map>
#include "node.h"

class Cache {
protected:
    virtual void set(int, int) = 0;
    virtual int get(int) = 0;
};

#endif /* CACHE_H */
