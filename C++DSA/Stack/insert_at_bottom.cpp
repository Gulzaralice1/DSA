#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insert_At_Bottom(stack<int> &st, int x) {
    stack<int> tempStack; // Temporary stack to hold elements

    // Step 1: Move all elements from the original stack to the temporary stack
    while(!st.empty()) {
        int current = st.top(); // Get the top element of the original stack
        st.pop(); // Remove the top element from the original stack
        tempStack.push(current); // Push the element onto the temporary stack
    }

    // Step 2: Push the new element x onto the original stack
    st.push(x);

    // Step 3: Move all elements back from the temporary stack to the original stack
    while(!tempStack.empty()) {
        int current = tempStack.top(); // Get the top element of the temporary stack
        tempStack.pop(); // Remove the top element from the temporary stack
        st.push(current); // Push the element back onto the original stack
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Insert the element 100 at the bottom of the stack
    insert_At_Bottom(st, 100);

    // Print the elements of the stack to verify the insertion
    while(!st.empty()) {
        int current = st.top(); // Get the top element of the stack
        st.pop(); // Remove the top element from the stack
        cout << current << endl; // Print the element
    }

    return 0;
}
