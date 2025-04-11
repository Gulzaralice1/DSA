#include<iostream>
using namespace std;

int main() {
    // Basic pointer
    int a = 10;
    int *ptr = &a;
    cout << "This is address of A: " << ptr;
    cout << "\nThis is value of A address: " << *ptr;

    // Float pointer
    float price = 20.6f;
    float *ptr_price = &price;
    cout << "\n\nThis is address of price: " << ptr_price;
    cout << "\nThis is value of price: " << *ptr_price;

    // Pointer to pointer
    int b = 10;
    int *ptr1 = &a;            // ptr1 holds address of 'a'
    int **parent_ptr = &ptr1;  // parent_ptr holds address of 'ptr1'

    cout << "\n\nThis is ptr1 address: " << &ptr1;
    cout << "\nThis is parent_ptr address (address of ptr1): " << parent_ptr;
    cout << "\nThis is value of parent_ptr (value at ptr1): " << *parent_ptr;
    cout << "\nThis is value at value of parent_ptr (value of a): " << **parent_ptr;

    return 0;
}
