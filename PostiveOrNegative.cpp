#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    if(n>0){
        cout<<"Positive Number.."<<endl;
    }
    else if(n<0){
        cout<<"Negative Number.."<<endl;
    }
    else{
        cout<<"Zero.."<<endl;
    }

    return 0;

}