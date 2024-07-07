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

bool palindrome(Node* &head, Node* &tail){
    if(head == NULL || tail == NULL){
        return false;
    }
    while(head != tail && tail != head->prev){
        if(head->val != tail->val){
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
   
}

int main(){
    dublelinkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.display();
    cout<<palindrome(l1.head, l1.tail)<<endl;

    return 0;
}
