//cyclin remove linkedlist
//pw skill
//linkeslist part2 1:52:55
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

    if(!head){
        return false;
    }

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;   
}

void remove__cycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    //find common point where cycle slow point and fast point meat (slow == fast ===> 7 )
    do{
        slow = slow->next;       //1->2->3->4->5->6->7
        fast = fast->next->next; //1->3->5->7->3->5->7
    }while(slow != fast);  //when slow == fast loop end,  that point is 7 when loop is end

    // now we have to find that point where start the cycle again, that point is 3 but we have to find ?
    //slow point start from 7  slow->next;        7->8->3    3 is our point
    //fast point start from head fast->next;      1->2->3
    fast = head;

    while(slow != fast){     //3 != 3
        slow = slow->next;  //8 = 8->3
        fast = fast->next; // 2 = 2->3
    }

    slow->next = NULL;  //8->NULL;  diconnet with 3 then cycle remove
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
                                                  //8--->   =  1--->2--->2---->3
    l1.head->next->next->next->next->next->next->next->next = l1.head->next->next;
    cout<<cyclin_linkedlist(l1.head);  //here cycle print 1
    
    remove__cycle(l1.head); //remove cycle 

    cout<<"\nAfter Remove Cycle "<<endl;
    cout<<cyclin_linkedlist(l1.head);
    return 0;
}