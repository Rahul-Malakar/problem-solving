//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        vector<string> v;
        int a,b; cin>>a>>b;
        for(int i=0; i<a; i++){
            string s; cin>>s;
            v.emplace_back(s);
        }
        int smin=INT32_MAX;
        
        for(int i=0; i<a-1; i++){
            
            for(int j=i+1; j<a; j++){
                int sum=0;
                
                for(int k=0; k<b; k++){
                    sum+=abs((v[i][k])-(v[j][k]));
                }
                smin=min(smin,sum);
            }
        }
        cout<<smin<<endl;
    }
    
    return 0;
}