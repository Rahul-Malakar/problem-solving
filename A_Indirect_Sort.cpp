//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        vector<int> v;
        int mini=INT_MAX;
        int a; cin>>a;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            mini=min(mini, b);
            v.emplace_back(b);
        }
        
    
        if(v[0]==mini){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}