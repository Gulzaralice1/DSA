#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> &st){
    stack<int> t1,t2; //temp1, temp2;
    while(! st.empty()){
        int current = st.top();
        st.pop();
        t1.push(current);
    }
    while(! t1.empty()){
        int current = t1.top();
        t1.pop();
        t2.push(current);
    }
    while(! t2.empty()){
        int current = t2.top();
        t2.pop();
        st.push(current);
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl<<endl;
    reverse(st);
    while(! st.empty()){
        int current = st.top();
        st.pop();
        cout<<current<<endl;
    }
    return 0;
}