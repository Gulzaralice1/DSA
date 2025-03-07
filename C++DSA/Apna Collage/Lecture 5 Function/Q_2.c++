// 2. calculate N factorial

#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Here some Fact: 3!--> 6, 4!--> 24\n\n";
    cout<<"Enter  Nmuber for Fact: ";
    cin>>n;

    int result = fact(n);
    cout<<"Here your fact: "<<result;
    return 0;
}