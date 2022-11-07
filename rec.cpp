//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}

int main(){

    ios_base::sync_with_stdio(false);
    int a,b; cin>>a>>b;
    cout<<power(a,b);
   
    return 0;
}