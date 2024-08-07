#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element at the kth position (0-based index) in the stack
void insertAtKthPosition(stack<int> &st, int x, int idx) {
    stack<int> tempStack; // Temporary stack to hold elements
    int n = st.size();    // Get the current size of the stack
    int count = 0;        // Initialize a counter

    // Move elements from the original stack to the temporary stack
    // until we reach the desired position (idx) to insert the new element
    while(count < n - idx) {
        int current = st.top(); // Get the top element of the original stack
        st.pop();               // Remove the top element from the original stack
        tempStack.push(current); // Push the element onto the temporary stack
        count++;
    }

    // Push the new element x onto the original stack
    st.push(x);

    // Move the elements back from the temporary stack to the original stack
    while(!tempStack.empty()) {
        int current = tempStack.top(); // Get the top element of the temporary stack
        tempStack.pop();               // Remove the top element from the temporary stack
        st.push(current);              // Push the element back onto the original stack
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Insert the element 100 at the 3rd position (0-based index) in the stack
    insertAtKthPosition(st, 100, 3);

    // Print the elements of the stack to verify the insertion
    while(!st.empty()) {
        int current = st.top(); // Get the top element of the stack
        st.pop();               // Remove the top element from the stack
        cout << current << endl; // Print the element
    }

    return 0;
}
