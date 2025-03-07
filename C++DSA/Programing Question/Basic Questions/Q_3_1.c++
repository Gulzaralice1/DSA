// 3.1. Write a program to swap two variables without using a third variable. 
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Value Of A: ";
    cin >> a;

    cout << "Enter Value Of B: ";
    cin >> b;

    // Swapping without a third variable
    a = a + b;  // Step 1: a now holds sum of a and b
    b = a - b;  // Step 2: b is assigned the original value of a
    a = a - b;  // Step 3: a is assigned the original value of b

    cout << "After swapping:\n";
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}
