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

    void insertAtEnd(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            tail = new_node;
        }else{
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void addEleKthPosition(int val, int k){
        Node* temp = head;
        int count = 1;

        while(count < (k-1)){
            temp = temp->next;
            count++;
        }

        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        temp->next->prev = new_node;
        return;
    }
    void dispaly(){
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
    l1.dispaly();
    l1.addEleKthPosition(15,3);
    l1.dispaly();

    return 0;
}