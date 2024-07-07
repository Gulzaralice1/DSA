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
Node* rearrangment(Node* &head, int k){
    //1->2->3->4->5->6
    int n = 0;
    Node* last = head;

    //2. step
    //find N & L
    while(last->next != NULL){
        n++;
        last = last->next;
        //last node is 6
    }
    n++; //6
    
    //3. step 
    //traverse kth nodes so we have to find
    k = k%n; 
    if(k == 0){
        return head;
    }
    last->next = head; // last->next = head , 6->.... = 1->2->3
    Node* temp = head;
    for(int i=1; i<n-k; i++){
        temp = temp->next;
    }

    Node* newhead = temp->next;
    temp->next = NULL;
    return newhead;
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
    l1.head = rearrangment(l1.head,3);
    l1.display();
    return 0;
}