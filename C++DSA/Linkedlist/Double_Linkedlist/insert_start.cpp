/*
head - [10]
tail - [10]
Create new_node(20).
Set new_node(20)->next to the current head ([10]).
Update head(10)->prev = new_node(20).
Update head(10) to new_node(20).*/ 
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

class doublelinkedlist{
    public:
    Node* head;
    Node* tail;

    //constructre
    doublelinkedlist(){
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }else{
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
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
    doublelinkedlist l1;
    // l1.insertAtStart(1);
    // l1.display();
    // l1.insertAtStart(2);
    // l1.display();
    // l1.insertAtStart(3);
    // l1.display();
    // l1.insertAtStart(4);
    // l1.display();
    // l1.insertAtStart(5);
    // l1.display();
    cout<<endl;
    int n = 10;
    for(int i=1; i<=n; i++){
        l1.insertAtStart(i);
        l1.display();
    }
    return 0;
}