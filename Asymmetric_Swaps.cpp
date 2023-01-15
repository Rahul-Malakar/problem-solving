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
        vll v;
        ll maxi=INT_MAX;
        for(ll i=0; i<2*a; i++){
            ll b; cin>>b;
            v.eb(b);
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<2*a; i++){
            if(i>=a-1){
                maxi=min(v[i]-v[i-a+1],maxi);
            }
        }
        cout<<maxi<<endl;
    }

    return 0;
}