//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        int sum=0;
        int vmin=INT32_MAX;
        vector<int> v;
        for(int i=0; i<a; i++){
            int b; cin>>b; v.emplace_back(b);
            vmin=min(vmin,b);
            
        }
        for(int i=0; i<a; i++){
            sum+=v[i]-vmin;
        }
        cout<<sum<<endl;

    }
    
    return 0;
}