//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        vector<int> v;
        for(int i=0; i<a; i++){
            
            int b; cin>>b; v.emplace_back(b);
        }
        int amax=max(v[0],v[1]);
        int bmax=min(v[0],v[1]);
        int flag=1;
        for(int i=2; i<a; i++){
            if(v[i]>=amax){
                amax=v[i];
            }
            else if(v[i]<=bmax){
                bmax=v[i];
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}