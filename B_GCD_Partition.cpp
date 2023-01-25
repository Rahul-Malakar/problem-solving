//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        ll a; cin>>a;
        vll v(a+1);
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            v[i+1]=v[i]+b;
        }
        
        ll ans=1;
        for(ll i=1; i<a; i++){
            ans=max(ans,__gcd(v[i],v[a]));
        }
        cout<<ans<<endl;
        
    }

    return 0;
}