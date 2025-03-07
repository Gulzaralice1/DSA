// 11. Write a program to demonstrate the use of logical AND, OR, and NOT operators.  
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number for check divisible by 3 or even ";
    cin>>number;

    string result = (number % 3 == 0 && number % 2 == 0) ? "Divisible by 3 and Even " : "Not Divisible by 3";
    string result2 = (number % 3 == 0 || number % 2 == 0) ? "Divisible by 3 and Even " : "Not Divisible by 3";
    cout<<"\n"<<result;
    cout<<"\n"<<result2;
    return 0;
}