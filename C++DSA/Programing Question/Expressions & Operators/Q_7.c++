// 7. Write a program to find the remainder and quotient of two numbers. 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Number A: ";
    cin>>a;

    cout<<"Enter Number B: ";
    cin>>b;

    cout << "\nQuotient: " << a / b << "\n";  // Quotient
    cout << "Remainder: " << a % b << "\n";  // Remainder
    return 0;
}