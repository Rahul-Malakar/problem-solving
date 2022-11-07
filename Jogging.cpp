//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

long long power(long long a, long long b){
    long long res=1;
    while(b){
        if(b%2){
            res=(res*a)%1000000007;
        }
        a=(a*a)%1000000007;
        b=b/2;
    }
    return res;
}

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        long long a,b; cin>>a>>b;
        long long pwr=power(2,a-1);
        cout<<(pwr*b)%1000000007<<endl;
        

    }
    
    return 0;
}