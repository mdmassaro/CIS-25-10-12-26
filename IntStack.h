#ifndef INT_STACK_H
#define INT_STACK_H
#include "Node.h"

class IntStack {
private:
    Node* top;
    int count;
public:
    IntStack();
    ~IntStack();
    void push(int value);
    int pop();               // The stack must not be empty.
    int peek() const;        // The stack must not be empty.
    bool isEmpty() const;
    int size() const;
};
#endif
