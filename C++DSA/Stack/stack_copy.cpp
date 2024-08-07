#include<iostream>
#include<stack>
using namespace std;

// Function to copy the contents of a stack
stack<int> copyStack(stack<int> &st) {
    stack<int> tempStack; // Temporary stack to hold elements
    stack<int> copyStack; // Stack to hold the copy

    // Step 1: Move elements from the original stack to the temporary stack
    while(!st.empty()) {
        int current = st.top(); // Get the top element of the original stack
        st.pop(); // Remove the top element from the original stack
        tempStack.push(current); // Push the element onto the temporary stack
        // After the loop ends, tempStack will have elements in reverse order: [1, 2, 3, 4]
    }

    // Step 2: Move elements from the temporary stack to the copy stack
    while(!tempStack.empty()) {
        int current = tempStack.top(); // Get the top element of the temporary stack
        tempStack.pop(); // Remove the top element from the temporary stack
        copyStack.push(current); // Push the element onto the copy stack
        // After the loop ends, copyStack will have elements in the original order: [4, 3, 2, 1]
    }

    return copyStack; // Return the copy of the stack
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Create a copy of the stack
    stack<int> result = copyStack(st);

    // Print elements of the copied stack
    while(!result.empty()) {
        int print = result.top(); // Get the top element of the copied stack
        result.pop(); // Remove the top element from the copied stack
        cout << print << endl; // Print the element
    }

    return 0;
}
