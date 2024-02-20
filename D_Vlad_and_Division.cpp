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

    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vi v;
        for(ll i=0; i<n; i++){
            ll num; cin>>num;
            v.eb(num);
        }

        //solution tc : O(n*n)
        
        // map<ll,vector<ll>> m;
        // ll g =1;
        // m[g].eb(v[0]);
        // for(ll i=1; i<n; i++){
        //     ll cur = v[i];
            
        //     ll flag=0;
        //     for(ll i=1; i<=g; i++){
        //         if(m[i].size()==1){
        //             ll karo = cur^m[i][0];
        //             if(karo == ((1<<31)-1)){
        //                 flag=1;
        //                 m[i].eb(cur);
        //                 break;
        //             }
        //         }
        //     }
        //     if(flag==0){
        //         g++;
        //         m[g].eb(cur);
        //     }
        // }
        // cout<<m.size()<<endl;

        multiset<ll> ms;
        ll ans =n;
        ll inf = ((1LL<<31)-1);
        for(ll i=0; i<n; i++){
            ll b = v[i] ^ inf ;
            if(ms.find(b)!=ms.end()){
                ms.erase(ms.find(b));
                ans--;
            }
            else{
                ms.insert(v[i]);
            }
        }
        cout<<ans<<endl;

        
    }

    return 0;
}