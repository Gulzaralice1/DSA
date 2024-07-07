// 1->4->5->NULL
// 2->3->NULL
// 6->7->NULL
// 1->2->3->4->5->6->7->NULL
// M E R G E-------K T H------L I N K E D L I S T
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

Node* merge__linkedlist(Node* &head1, Node* &head2){
    Node* dummynode = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummynode;

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

    return dummynode->next;
}

Node* merge__kth__linkedlist(vector<Node*> &list){

    if(list.size() == 0){
        return NULL;
    }

    while(list.size() > 1){
        Node* mergeHead = merge__linkedlist(list[0], list[1]);
        list.push_back(mergeHead);//ADD A NEW NODE IN LIST 1->2->3->4->5->NULL
        list.erase(list.begin()); //AFTER MERGE DELETE LIST 1->4->5->NULL
        list.erase(list.begin()); //                        2->3->NULL
    }
    return list[0];  //RETURN ONLY ONE LIST AT THE END
}
int main()
{
    linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display(); //1->4->5->NULL

    linkedlist ll2;
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.display();//2->3->NULL

    linkedlist ll3;
    ll3.insertAtTail(6);
    ll3.insertAtTail(7);
    ll3.display();// 6->7->NULL

    vector<Node*> list;
    list.push_back(ll1.head);  //FIRST HEAD  1->4->5->NULL
    list.push_back(ll2.head);  //SECOND HEAD 2->3->NULL
    list.push_back(ll3.head);  //THIRD HEAD  6->7->NULL

    linkedlist fina_display;
    fina_display.head = merge__kth__linkedlist(list);  //1->2->3->4->5->6->7->NULL
    fina_display.display();
    return 0;
}