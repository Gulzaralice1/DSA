// calculate sum of digits of a number --

#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int sum = 0;

    while(num != 0){
        sum+= num % 10;
        num = num/10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Here eg: 145--> 10\n\n";
    cout<<"Enter number: ";
    cin>>num;

    int result = sumOfDigit(num);
    cout<<result;
    return 0;
}