#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"Enter year.."<<endl;
    cin>>year;

    if(year % 400 == 0){
        cout<<"Leap year"<<endl;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"Not a Leap year"<<endl;
    }

    return 0;
}