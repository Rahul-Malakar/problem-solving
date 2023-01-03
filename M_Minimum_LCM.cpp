// RAHUL MALAKAR 2112022

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

#define forl(i, n) for (int i = 0; i < n; i++)
#define forle(i, n) for (int i = 0; i <= n; i++)

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i, t)
    {
        ll a; cin>>a;
        ll ans=1;
        for(ll i=1; i*i<=a; i++){
            
            if(a%i==0){
                if(i<=a/2){
                    ans = max(ans,i);
                }
                if(a/i<=a/2){
                    ans = max(ans,a/i);
                }
            }
        }
        cout<<ans<<" "<<a-ans<<endl;
    }

    return 0;
}