//1->2->3->4->5->6->7->8->NULL
//Middle ele is 4 
//find middle ele in linkedlist
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

Node* find__Middle(Node* &head){
    //1->2->3->4->5->6->7->8->NULL
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    linkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.display();

    linkedlist l2;
    l2.head = find__Middle(l1.head);
    l2.display();

    Node* middlenode = find__Middle(l1.head);
    cout<<middlenode->val<<endl;
    return 0;
}