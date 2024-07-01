/*1->2->3->4->5->6->NULL
2->1->4->3->6->5->NULL */
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

Node* swapAdjacent(Node* &head){
    //base case:
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* secondHead = head->next;
    head->next = swapAdjacent(secondHead->next);
    secondHead->next = head;
    return secondHead;
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
    l1.head = swapAdjacent(l1.head);
    l1.display();

    return 0;
}