//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        string s; cin>>s;
        if((s[0]-'0')+(s[1]-'0')+(s[2]-'0')== (s[3]-'0')+(s[4]-'0')+(s[5]-'0')){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}