#include<iostream>
using namespace std;
int main(){
    int number;
    int prime[10] = {};
    int primeIndex = 0;
    bool isprime;
    
    cout<<"Enter Number for Prime: ";
    cin>>number;

    for(int i = 2; i <= number; i++){   /* 4     1 2 3 4 5 6....n*/
        isprime = true;
        for(int j = 2; j <= i/2; j++){   /*2     2 3*/
            if(i % j == 0){
                isprime = false;
                break;
            }
        }

        if(isprime && primeIndex < 10){
            primeIndex++;
            prime[primeIndex] = i;
        }
    }

    for(int i = 0; i < 10; i++){
        cout<<prime[i]<<" ";
    }
    return 0;
}