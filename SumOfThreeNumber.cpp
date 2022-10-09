#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 100; 
    int b = 12;
    int c = 40;

    if(a>b && a>c){
        cout<<"a is greatest number.."<<endl;
    }
    else if(b>a && b>c){
        cout<<"b is greatest Number.."<<endl;
    }
    else{
        cout<<"c is greatest number.."<<endl;
    }
    return 0;
}