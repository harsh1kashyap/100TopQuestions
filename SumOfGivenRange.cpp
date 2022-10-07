#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int j = 15;

    int sum = 0;
    for(int i = n; i<=j; i++){
        sum += i;
    }

    cout<<sum<<endl;

    return 0;
}

//time complexity:- O(N)
//space complexity:- O(1)