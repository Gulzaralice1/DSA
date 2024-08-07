#include <iostream>
using namespace std;

class Stack {
private:
    int capacity;
    int* array;  // Pointer variable
    int top;

public:
    // Constructor
    Stack(int c) {
        this->capacity = c;
        array = new int[c];
        this->top = -1;   // Initialize top to -1
    }

    // Destructor to deallocate memory
    ~Stack() {
        delete[] array;
    }

    // Stack push function
    void push(int data) {
        // Check if stack is full
        if (this->top == this->capacity - 1) {
            cout << "Stack is overfull" << endl;
            return;
        } else {
            this->top++;
            this->array[this->top] = data;
        }
    }

    // Stack pop function
    int pop() {
        if (this->top == -1) {  // Check if stack is empty
            cout << "Stack is Underflow" << endl;
            return -1;  // Return an invalid value or throw an exception
        } else {
            // int poppedValue = this->array[this->top];
            this->top--;
            // return poppedValue;
        }
    }

    // Get top element of the stack
    int getTop() {
        if (this->top == -1) {
            cout << "Stack is Underflow" << endl;
            return -1;  // Return an invalid value or throw an exception
        } else {
            return this->array[this->top];
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return this->top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return this->top == this->capacity - 1;
    }

    // Get current size of the stack
    int size() {
        return this->top + 1;
    }
};

int main() {
    Stack sk(5);
    sk.push(1);
    sk.push(2);
    sk.push(4);
    cout<<"Top ele "<<sk.getTop()<<endl;
    sk.pop();
    cout<<"Top ele after pop "<<sk.getTop()<<endl;
    cout<<"Stack Size "<<sk.size()<<endl;
    cout<<"Is stack empty? "<<(sk.isEmpty() ? "yes" : "No");
    return 0;
}
