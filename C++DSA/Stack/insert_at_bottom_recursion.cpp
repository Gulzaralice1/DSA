//Recursion
#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element at the bottom of a stack using recursion
void insertAtBottomRecursion(stack<int> &st, int x) {
    // Base case: if the stack is empty, push the element x
    if(st.empty()) {
        st.push(x);
        return;
    }
    
    // Store the top element and pop it
    int current = st.top();
    st.pop();
    
    // Recursive call to insert x at the bottom of the remaining stack
    insertAtBottomRecursion(st, x);
    
    // Push the stored element back onto the stack
    st.push(current);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Insert the element 100 at the bottom of the stack using recursion
    insertAtBottomRecursion(st, 100);

    // Print the elements of the stack to verify the insertion
    while(!st.empty()) {
        int current = st.top(); // Get the top element of the stack
        st.pop(); // Remove the top element from the stack
        cout << current << endl; // Print the element
    }

    return 0;
}
