//Recursive
#include<iostream>
#include<stack>
using namespace std;

// Recursive function to insert an element at the kth position (0-based index) in the stack
void insertAtKthPositionRecursive(stack<int> &st, int x, int idx, int currentIndex = 0) {
    // Base case: if the current index is equal to the target index, push the element x
    if (currentIndex == idx) {
        st.push(x);
        return;
    }

    // Store the top element and pop it
    int currentElement = st.top();
    st.pop();

    // Recursive call to insert x at the desired position
    insertAtKthPositionRecursive(st, x, idx, currentIndex + 1);

    // Push the stored element back onto the stack
    st.push(currentElement);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Insert the element 100 at the 3rd position (0-based index) in the stack
    insertAtKthPositionRecursive(st, 100, 3);

    // Print the elements of the stack to verify the insertion
    while (!st.empty()) {
        int current = st.top(); // Get the top element of the stack
        st.pop();               // Remove the top element from the stack
        cout << current << endl; // Print the element
    }

    return 0;
}
