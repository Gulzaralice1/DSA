//1->2->3->4->5->6->7->8
/*1->2->3->4
  8->7->6->5 (reverse)

  1->8->2->7->3->6->4->5->  null  */
#include<iostream>
#include<vector>
using  namespace std;
class Node{
    public:
    int val;
    Node* next;

    //constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

class linkedlist{
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

Node* reorder(Node* &head){
    //FIND MIDDLE 1->2->3->4->5->6->7->8->NULL
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){  
        slow = slow->next;
        fast = fast->next->next;
    }


    //now slow is 5 its middle Node
    //START REVERSE
    //5->6->7->8->NULL  , 8->7->6->5->NULL 
    Node* current = slow->next;
    slow->next = NULL;
    Node* prev = slow;

    while(current != NULL){
        Node* new_curent = current->next;
        current->next = prev;
        prev = current;
        current = new_curent;
    }
    //reverse completed

    /*1->2->3->4  ptr1 
      8->7->6->5 (reverse)  ptr2*/

    Node* ptr1 = head; //1->2->3->4 
    Node* ptr2 = prev; //8->7->6->5 

    while(ptr1 != ptr2){
       //1->8->2->7->3->6->4->5->null 
       Node* temp = ptr1->next;
       ptr1->next = ptr2;

       ptr1 = ptr2; // 1 = 8  ultimatly ptr1 = 8  2  7  3
       ptr2 = temp;  // 8 = 2  ......... ptr2= 2  7  3  6
    }
    return head;
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
    l1.display();
    l1.head = reorder(l1.head);
    l1.display();
    return 0;
}