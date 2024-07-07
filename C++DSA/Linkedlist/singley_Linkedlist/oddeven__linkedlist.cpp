//ODD EVEN LINKEDLIST
//1->2->3->4->5->6->NULL
//1->3->5->2->4->6
// odd->even
#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;

    //constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};
class linkedlist {
    public:
    Node* head = NULL;

    linkedlist(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        Node* temp = head;

        if(head == NULL){
            head = new_node;
            return;
        }

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

Node* oddeven(Node* &head){
    Node* oddhead  = head;
    Node* evenhead = head->next;

    Node* oddptr   = head;
    Node* evenptr  =  evenhead;

    if(!head){
        return head;
    }

    while(evenptr != NULL && evenptr->next != NULL){
        oddptr->next = oddptr->next->next;  //1->3->5-7
        evenptr->next = evenptr->next->next;//2->4->6-8
        oddptr = oddptr->next; //oddptr++
        evenptr = evenptr->next; //evenptr++
    }
    oddptr->next = evenhead;
    //1->3->5-7->= 2->4->6-8
    return head; 
}
int main(){
    linkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.insertAtTail(8);
    l1.display();
    l1.head = oddeven(l1.head);
    l1.display();

    return 0;
}