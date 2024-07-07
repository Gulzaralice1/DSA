#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class doublelinkedlist {
public:
    Node* head;
    Node* tail;

    // Constructor
    doublelinkedlist() {
        head = NULL;
        tail = NULL;
    }
};

int main() {
    Node* new_node = new Node(3);
    doublelinkedlist l1;
    l1.head = new_node;
    l1.tail = new_node;
    cout<<l1.head->val<<" "<<l1.tail->val;
    return 0;
}
