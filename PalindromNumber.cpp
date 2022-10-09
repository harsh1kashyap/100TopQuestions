#include<bits/stdc++.h>
using namespace std;

int main(){
    int rem = 0, reverse = 0;
    int num = 1231;

    int temp = num;
    while(temp != 0){
        rem = temp%10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    cout<<reverse<<endl;

    if(num == reverse){
        cout<<" Palindrom number"<<endl;
    }
    else{
        cout<<" not Palindrom number"<<endl;
    }
    return 0;
}