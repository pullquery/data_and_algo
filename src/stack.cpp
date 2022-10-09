#include <iostream>
#include <stdexcept>

class Node {
public:
    int data;
    Node *next;

    Node(int data) : data(data), next(nullptr) {}
};

class Stack {
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty() {
        if (top == nullptr) {
            return true;
        }
        return false;
    }

    void push(int data) {
        Node *node = new Node{data};
        if (isEmpty()) {
            top = node;
        } else {
            node->next = top;
            top = node;
        }
    }

    int pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty.");
        } else {
            Node *node = top->next;
            int data = top->data;

            delete top;
            top = node;
            return data;
        }
    }

    int peek() {
        return top->data;
    }

    int print() {
        Node *seek;
        for (seek = top; seek != nullptr; seek = seek->next) {
            std::cout << seek->data << std::endl;
        }
    }
};

int main() {
    Stack s{};
    s.push(1);
    s.push(2);
    s.push(3);

    s.print();
}