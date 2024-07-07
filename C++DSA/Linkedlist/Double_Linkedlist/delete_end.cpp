// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

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

    dublelinkedlist(){
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int val){
       Node* New_node = new Node(val);
       if(head == NULL){
            head = New_node;
            tail = New_node;
            return;
       }else{
            tail->next = New_node;
            New_node->prev = tail;
            tail = New_node;
       }
    }

    void delete_End(){
        if(head == NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        }
        free(temp);
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};
int main(){
    dublelinkedlist l1;
    l1.insertAtEnd(1);
    l1.insertAtEnd(2);
    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(5);
    l1.insertAtEnd(6);
    l1.insertAtEnd(7);
    l1.display();
    l1.delete_End();
    l1.display();
    return 0;
}