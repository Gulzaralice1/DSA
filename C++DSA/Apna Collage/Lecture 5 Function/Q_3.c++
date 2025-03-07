// 3. calculate sum of number from 1 to N

#include<iostream>
using namespace std;

int sumOfNNaturalNumber(int number){
    int sum = 0;
    for(int i = 1; i<= number; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int number;
    cout<<"Here some eg: 10-- 55\n\n";
    cout<<"Enter number for sum: ";
    cin>>number;

    int result = sumOfNNaturalNumber(number);
    cout<<"Sum of N Natural number is "<<result;
    return 0;
}