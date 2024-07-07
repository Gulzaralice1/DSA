// 1 2 3 4 5 6 7 8 9 
// 1 2 3 5 6 7 8 9 
// duble linkedlist

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

class dublelonkedlist{
    public:
    Node* head;
    Node* tail;

    dublelonkedlist(){
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int val){
        Node* new_node = new  Node(val);
        
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }else{
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void delete_kth_position(int k){  //k is position for delete Node
        Node* temp = head;
        Node* delete_node;
        int count = 1;

        if(head == NULL){
            return;
        }

        while(count < k){
            temp = temp->next;
            count++;
        } // we got temp 
        // delete_node = temp->next;
        // temp->next = temp->next->next;
        // temp->next->next->prev = temp;
        // free(delete_node);
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
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
    dublelonkedlist l1;
    l1.insertAtEnd(1);
    l1.insertAtEnd(2);
    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(5);
    l1.insertAtEnd(6);
    l1.insertAtEnd(7);
    l1.insertAtEnd(8);
    l1.insertAtEnd(9);
    l1.display();

    l1.delete_kth_position(4);
    l1.display();
    return 0;
}