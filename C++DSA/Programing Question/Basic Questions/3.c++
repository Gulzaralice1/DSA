// 3. Write a program to swap two variables with using a third variable.  
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter value A: ";
    cin>>a;

    cout<<"Enter value B: ";
    cin>>b;

    // swap condation
    c = a;
    a = b;
    b = c;

    // now print value 
    cout<<"A: "<<a<<"\n"<<"B: "<<b;
     
    return 0;
}