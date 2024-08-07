//internal stack
#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> st;   
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while(! st.empty()){
        int print = st.top();
        st.pop();
        cout<<print<<endl;
    }
    cout<<st.top()<<endl; //top should be 4
    st.pop();
    cout<<st.top()<<endl; //top should be 3
    cout<<st.empty()<<endl; //empty should be 0 its means false
    return 0;
}