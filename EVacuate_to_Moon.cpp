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
        ll n,m,h; cin>>n>>m>>h;
        vector<ll> cap;
        vector<ll> have;
        for(ll i=0; i<n; i++){
            ll a; cin>>a;
            cap.eb(a);
        }
        for(ll i=0; i<m; i++){
            ll b; cin>>b;
            have.eb(b);
        }

        sort(cap.begin(), cap.end());
        sort(have.begin(), have.end());

        ll ans=0;
        
        vector<ll> newcap;
        vector<ll> newhave;

        if(n<m){
            newcap = cap;
            for(ll i=m-1; i>=m-n; i--){
                newhave.eb(have[i]);
            }
        }
        else{
            newhave = have;
            for(ll i=n-1; i>=n-m; i--){
                newcap.eb(cap[i]);
            }
        }

        sort(newcap.begin(), newcap.end());
        sort(newhave.begin(), newhave.end());

        for(ll i=0; i<newhave.size(); i++){
            if(h*newhave[i]>=newcap[i]){
                ans+=newcap[i];
            }
            else{
                ans+=h*newhave[i];
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}