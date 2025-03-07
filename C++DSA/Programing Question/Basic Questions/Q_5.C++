// 5. Write a program to take input of an integer, float, and character and display them.  
#include<iostream>
using namespace std;
int main(){
    int interger;
    float floate;
    char character;
    string str;

    cout<<"Enter integer (eg:- 1,2,3..)  ";
    cin>>interger;

    cout<<"Enter float (eg:- 1.2,4.2,)  ";
    cin>>floate;

    cout<<"Enter character (eg:- ABC,DEF,GHI...)  ";
    cin>>character;

    cout<<"Enter Stirng (eg:- ANY WORD)  ";
    cin>>str;

    cout<<interger<<"   "<<floate<<"    "<<character<<"     "<<str;

    return 0;
}