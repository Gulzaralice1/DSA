// 6. Write a program to perform addition, subtraction, multiplication, and division of two numbers. 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number A: ";
    cin>>a;

    cout<<"Enter number B: ";
    cin>>b;
    cout<<"\n\n";
    cout<<"addition ";
    cout<<a <<" + "<<b<<" = "<<a+b<<"\n";

    cout<<"subtraction ";
    cout<<a<<" - "<<b<<" = "<<a-b<<"\n";

    cout<<"multiplication ";
    cout<<a <<" * "<<b<<" = "<<a*b<<"\n";

    cout<<"division ";
    cout<<a <<" / "<<b<<" = "<<a/b<<"\n";
    return 0;
}