#include <iostream>

class Node {
public:
    int data;
    Node *next;

    Node(int data) : data(data), next(nullptr) {}
};

class List {
private:
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr) {}

    bool isEmpty() {
        if (head == nullptr) {
            return true;
        }
        return false;
    }

    void pushFirst(int data) {
        Node *node = new Node{data};

        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            node->next = head;
            head = node;
        }
    }

    void pushLast(int data) {
        Node *node = new Node{data};

        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    void print() {
        Node *seek;
        for (seek = head; seek != nullptr; seek = seek->next) {
            std::cout << seek->data << std::endl;
        }
    }
};