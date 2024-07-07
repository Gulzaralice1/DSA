//cyclin linkedlist
//pw skill
//linkeslist part2 1:38:55
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

bool cyclin_linkedlist(Node* &head){
    Node* slow = head;
    Node* fast = head;

    //BASE CASE:
    if(!head){
        return false;
    }
    //while loop 
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<"Slow "<<slow->val<<"\n"<<"Fast "<<fast->val<<endl;  //9 and true
            return true;
        }
    }

    return false;
}

int main()
{
    linkedlist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.insertAtTail(8);

     //1----->2----->3--->4----->5---->6---->7---->8-->next  =     1---->2---->3;
    l1.head->next->next->next->next->next->next->next->next  = l1.head->next->next;
    cout<<cyclin_linkedlist(l1.head);
    return 0;
}