#include<iostream>
using namespace std;
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array) / sizeof(array[0]);
    int n;
    int  result = -1;
    cout<<"Enter Number you want to search: ";
    cin>>n;

    for(int i = 0; i<length; i++){
        if(array[i] == n){
            result = array[i];
        }
    }

    if(result != -1){
        cout<<"This is number u want to search: "<<result;
    }else{
        cout<<"Not Found! ";
    }

    return 0;
}