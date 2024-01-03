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
    
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> ms;
    ll last;
    for(ll i=0; i<=m; i++){
        ll a; cin>>a;
        ms.eb(a);
    }
    last = ms[ms.size()-1];
    ll count =0;
    for(int i=0; i<m; i++){
        int cur = ms[i]^last;
        if(__builtin_popcount(cur)<=k){
            count++;
        }
    }
    cout<<count;


    return 0;
}