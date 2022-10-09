#include<bits/stdc++.h>
using namespace std;

int main(){
    int rem =0, reverse = 0; 
    int num = 1234;

    while(num != 0){
        rem = num%10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    cout<<reverse<<endl;
}