//M E R G E------L I N K E D L I S T
// 1->3->5->NULL
// 2->4->NULL
// 1->2->3->4->5->NULL
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

Node* merge_linkedlist(Node* &head1, Node* &head2){

    Node* dummyhead = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyhead;

    while(ptr1 != NULL && ptr2 != NULL){

        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1 != NULL){
        ptr3->next = ptr1;
    }else{
        ptr3->next = ptr2;
    }

    return dummyhead->next;
}
int main(){
    linkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.display();

    linkedlist l2;
    l2.insertAtTail(1);
    l2.insertAtTail(2);
    l2.insertAtTail(4);
    l2.insertAtTail(5);
    l2.insertAtTail(6);
    l2.insertAtTail(7);
    l2.display();

    linkedlist l3;

    l3.head = merge_linkedlist(l1.head, l2.head);
    l3.display();


    return 0;
}