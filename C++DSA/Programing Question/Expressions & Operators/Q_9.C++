// 9. Write a program to check if a number is even or odd using the conditional (ternary) operator

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number for check Even or Not: ";
    cin>>number;

    cout<<"\n";
    string result  = (number % 2 == 0) ? "Even" : "Odd";
    cout<<number<<" "<<result;
    return 0;
}
