// Rahul Malakar 2112022

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
        ll a,b; cin>>a>>b;
        ll c=a^b;
        vector<ll> v,v2;
        v2.emplace_back(2);
        if(a%2){v.emplace_back(a);}
        if(b%2){v.emplace_back(b);}
        if(c%2){v.emplace_back(c);}
        v2.emplace_back(2^v[0]);
        v2.emplace_back(2^v[1]);
        sort(v2.begin(),v2.end());
        for(auto it:v2){
            cout<<it<<" ";
        }
        cout<<endl;

    }

    return 0;
}