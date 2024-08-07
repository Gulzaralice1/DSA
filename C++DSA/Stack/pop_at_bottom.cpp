//Recursive + itrative
#include<iostream>
#include<stack>
using namespace std;
void popAtBottom(stack<int> &st){
    stack<int> tempStack;

    while(st.size() != 1){
        int current = st.top();
        st.pop();
        tempStack.push(current);
    }
    st.pop();

    while(! tempStack.empty()){
        int current = tempStack.top();
        tempStack.pop();
        st.push(current);
    }
}

void f(stack<int> &st){  //recurcive
    stack<int> tempstack;
    if(st.size() == 1){
        st.pop();
        return;
    }
    int current = st.top();
    st.pop();
    f(st);
    st.push(current);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    popAtBottom(st);

    while(! st.empty()){
        int cureent = st.top();
        st.pop();
        cout<<cureent<<endl;
    }
    return 0;
}