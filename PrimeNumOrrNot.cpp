#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number.."<<endl;
    cin>>n;

    int count = 0;

    for(int i =1; i<n+1; i++){
        if(n%i == 0){
            count += 1;
        }
    }

    if(n==0 || n==1){
        cout<<"The given number is not prime number"<<endl;
    }
    else if(count>2){
        cout<<"The given number is not prime number"<<endl;
    }
    else{
        cout<<"The given number is prime number"<<endl;
    }

    return 0;
}