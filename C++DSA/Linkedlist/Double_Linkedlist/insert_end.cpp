/*
head - [10]
tail - [10]
Create new_node(20).
Set tail(10)->next to the new_node(20).
Update new_node(20)->prev = tail(10).
Update tail(10) = new_node(20).*/ 
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    //constructore
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

    //constructre
    dublelinkedlist(){
        head = NULL;
        tail = NULL;
    }


    void insertAtEnd(int val){
        Node* new_node = new Node(val);

        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }else{
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
            return;
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

int main(){
    dublelinkedlist l1;

    l1.insertAtEnd(1);
    l1.display();
    l1.insertAtEnd(2);
    l1.display();
    l1.insertAtEnd(3);
    l1.display();
    l1.insertAtEnd(4);
    l1.display();
    l1.insertAtEnd(5);
    l1.display();
    return 0;
}