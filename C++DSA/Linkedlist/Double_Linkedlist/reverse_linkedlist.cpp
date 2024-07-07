// 1 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 1 
// lecture no linkedlist-3 l-52 pw skill 
// DUBLEYLINKEDLIST
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class dublelinkedlist{
    public:
    Node* head;
    Node* tail;

    //constructor
    dublelinkedlist(){
        head = NULL;
        tail = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);

        if(tail == NULL){
            tail = new_node;
            head = new_node;
        }else{
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};

void reverse(Node* &head, Node* &tail){
    Node* current = head;

    while(current != NULL){
        Node* new_current = current->next;
        current->next = current->prev;
        current->prev = current->next;
        current = new_current;
    }
    Node* new_head = tail;
    tail = head;
    head = new_head;
}
int main(){
    dublelinkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.insertAtTail(8);
    l1.insertAtTail(9);
    l1.display();
    reverse(l1.head,l1.tail);
    l1.display();
    return 0;
}
