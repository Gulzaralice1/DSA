//palindrome 
//linkedlist part2 2:06
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


bool ispalindrome(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //now slow is ponting to middle
    Node* curent = slow->next;
    Node* prev = slow;
    slow->next = NULL;

    //reverse function
    while(curent != NULL){
        Node* nextNode = curent->next;
        curent->next = prev;
        prev = curent;
        curent = nextNode;
    }

    Node* head1 = head;
    Node* head2 = prev;

    while(head2 != NULL){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main(){
    linkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.display();
    cout<<ispalindrome(l1.head);
    return 0;
}