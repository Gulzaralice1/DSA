#include<iostream>
using namespace std;
int main(){

    int number;
    bool isprime = true;
    cout<<"Enter Number: ";
    cin>>number;

    for(int i = 2; i < number-1; i++){
        if(number % i == 0){
            isprime = false;
            break;
        }
    }

    cout<<isprime;
    return 0;
}