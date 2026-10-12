#include "IntStack.h"

IntStack::IntStack() : top(nullptr), count(0) {}

IntStack::~IntStack() {
    // Walk the list and delete every node.
    while (top != nullptr) {
        Node* old = top;
        top = top->next;
        delete old;
    }
}

void IntStack::push(int value) {
    top = new Node{value, top};   // the new node points at the old top
    // Equivalent to:
    // Node* node = new Node;
    // node->value = value;
    // node->next = top;
    ++count;
}

int IntStack::pop() {
    Node* old = top;
    int value = old->value;   // save what we need before deleting
    top = old->next;
    delete old;
    --count;
    return value;
}

int IntStack::peek() const {
    return top->value;
}

bool IntStack::isEmpty() const {
    return top == nullptr;
}

int IntStack::size() const {
    return count;
}
