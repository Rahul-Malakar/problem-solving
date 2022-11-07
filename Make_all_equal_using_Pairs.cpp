//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        long long a; cin>>a;
        vector<long long> v;
        set<long long> st;
        for(long long i=0; i<a; i++){
            long long b; cin>>b; v.emplace_back(b);
            st.insert(b);
        }
        vector<long long> vset{st.begin(),st.end()};
        long long count=0;
        for(long long i=0; i<vset.size(); i++){
            long long tempcount=0;
            for(long long j=0; j<v.size(); j++){
                if(v[j]==vset[i]){
                    tempcount++;
                }
            }
            count=max(tempcount,count);
        }
        cout<<v.size()-count<<endl;
    }
    
    return 0;
}