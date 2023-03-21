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
#define sortd(v) sort(v.rbegin(), v.rend())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        ll sum=0;
        ll v[a];
        
        for(ll i=0; i<a; i++){
            cin>>v[i];
        }
        ll pre[a+1];
        pre[0]=0;
        for(ll i=0; i<a; i++){
            pre[i+1]=v[i]+pre[i];
        }
        sum=pre[a];

        for(ll i=0; i<b; i++){
            ll l,r,k; cin>>l>>r>>k;
            cout<<((sum-pre[r]+pre[l-1] + k*(r-l+1))%2?"YES":"NO");
            
            cout<<endl;
        }
    }


    return 0;
}