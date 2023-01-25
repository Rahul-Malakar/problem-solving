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
        ll count=0;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            if(b==1){
                count++;
            }
        }
        ll ans=a-count;
        if(count&1){
            ans+=count/2;
            ans++;
        }
        else{
            ans+=count/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}