#include<bits/stdc++.h>
using namespace std;

int main(){
    int digits = 123456;
    int sum = 0;

    while(digits != 0){
        sum += digits%10;
        digits = digits/10;
    }

    cout<<"Sum of Digits: "<<sum<<endl;
}