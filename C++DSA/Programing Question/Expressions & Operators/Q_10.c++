// 10. Write a program to compare two numbers using relational operators and print which one is greater.
// List of Relational Operators   ==, !=, >=, <=  >, < 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number for A: ";
    cin>>a;
    cout<<"Entre number for B: ";
    cin>>b;

    cout << a <<" == "<< b <<" "<<(a == b) << endl;  // 0 (false)
    cout << a <<" != "<< b <<" "<<(a != b) << endl;  // 1 (true)
    cout << a <<" > "<< b <<" "<<(a > b) << endl;   // 0 (false)
    cout << a <<" < "<< b <<" "<<(a < b) << endl;   // 1 (true)
    cout << a <<" >= "<< b <<" "<<(a >= b) << endl;  // 0 (false)
    cout << a <<" <= "<< b <<" "<<(a <= b) << endl;  // 1 (true)

    return 0;
}