// 1. calculate   NCR Binomial coefficient for n & r

#include<iostream>
using namespace std;
// Here common function Factorial
int factorial(int num){
    int fact = 1;
    for(int i = 1; i<= num; i++){
        fact*=i;
    }
    // cout<<fact;
    return fact;
}

int ncr(int n, int r){
    // return factorial(n)/ factorial(r) * factorial(n - r);
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(){

    int n,r;

    cout<<"N = 8, R = 2 ANSWER: 28\n\n";
    cout<<"Enter N: ";
    cin>>n;

    cout<<"Enter R: ";
    cin>>r;
    // factorial(n);

    int result = ncr(n,r);
    cout<<"This is your Factorial :"<<result;
    return 0;
}



// example N = 8
        // R = 2
        // 28  ANSWER