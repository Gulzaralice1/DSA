#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructore
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class stack{
private:
    Node* head;
    int capacitor;
    int currentSize;
public:
    //constructor
    stack(int c){
        head = NULL;
        this->capacitor = c;
        this->currentSize = 0;
    }

    bool isEmpty(){
        return this->head == NULL;
        //if this head == null then return empty
    }

    bool isFull(){
        return this->currentSize == this->capacitor;
        //if currentSize == capacitor then return stack is FULL
    }

    void push(int data){
        if(this->currentSize == this->capacitor){
            cout<<"overflow"<<endl;
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currentSize++;
    }

    int pop(){
        if(this->head == NULL){
            cout<<"underflow"<<endl;
            return -1;
        }
        Node* temp = this->head;
        this->head = this->head->next;
        int result = head->data;
        delete temp;
        this->currentSize--;
        return result;
    }

    int getTop(){
        if(this->head == NULL){
            cout<<"underflow"<<endl;
            return -1;
        }
        return this->head->data;
    }

    int size(){
        return this->currentSize;
    }
};

int main()
{
    stack sk(5);
    sk.push(1);
    sk.push(2);
    sk.push(4);
    cout<<"Top ele "<<sk.getTop()<<endl;
    sk.pop();
    cout<<"Top ele after pop "<<sk.getTop()<<endl;
    cout<<"Stack Size "<<sk.size()<<endl;
    cout<<"Is stack empty? "<<(sk.isEmpty() ? "yes" : "No");
    return 0;
}