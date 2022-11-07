
//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        long long a; cin>>a;
        vector<long long> v;
        for(long long i=0; i<a; i++){
            long long b; cin>>b; v.emplace_back(b);
        }
        sort(v.begin(), v.end());

        vector<long long> vans;
        for(long long i=0; i<a/2; i++){
            vans.emplace_back(v[i]);
            vans.emplace_back(v[a-i-1]);
        }
        if(a%2){
            vans.emplace_back(v[a/2]);
        }
        for(long long i=a-1; i>=0; i--){
            cout<<vans[i]<<" ";
        }cout<<endl;
    }
    
    return 0;
}