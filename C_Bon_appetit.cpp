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
        ll a,b; cin>>a>>b;
        vll v(a);
        map <ll , ll> mp;
        for(int i=0; i<a; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        priority_queue<ll> table;
        priority_queue<ll> guest;
        vll c(b);
        for(ll i = 0; i < b; ++i){
            cin >> c[i];
            table.push(c[i]);
        }
        for(auto i : mp){
            guest.push(i.second);
        }
        ll ans = 0;
        while(!table.empty()){
            if(guest.empty()) break;
            ll x = table.top();
            ll y = guest.top();
            guest.pop();
            table.pop();
            ans += min(x , y);
            if(x < y){
                guest.push(y - x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}