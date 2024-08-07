#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &st){
    stack<int> tempStack; // Temporary stack to hold elements
    stack<int> result; // Stack to hold the copy

    while(! st.empty()){
        int current = st.top();  //[4 3 2 1]
        st.pop();
        tempStack.push(current);
        //when loop is end then tempStack like this [1 2 3 4]
    }
    //Again run a loop for store stack in result
    while(! tempStack.empty()){
        int current = tempStack.top(); //[1 2 3 4]
        tempStack.pop();
        result.push(current);
        //when loop is end then tempStack like this [4 3 2 1]
    }
    return result;
}


void f(stack<int> &st, stack<int> &result){
    if(st.empty()) return;
    int cureent = st.top();
    st.pop();
    f(st,result);
    result.push(cureent);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // stack<int> result = copyStack(st);
    stack<int> res;
    f(st,res);
    while(! res.empty()){
        int print = res.top();
        res.pop();
        cout<<print<<endl;
    }

    cout<<endl;

    return 0;
}