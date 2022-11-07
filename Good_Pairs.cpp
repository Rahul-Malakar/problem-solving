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
        // int n; cin>>n;
        // vector<int> v;
        // for(int i=0; i<n; i++){
        //     int a; cin>>a; v.emplace_back(a);
        // }

        // sort(v.begin(), v.end());
        // int ans=0;
        // int count=1;
        // int flag=0;
        // for(int i=1; i<n; i++){
            
        //     if(v[i]==v[i-1]){
        //         count++;
        //         if(i==n-1){
        //             ans+=(count*(count-1))/2;
        //             cout<<ans<<endl;
        //             flag=1;
        //             break;
        //         }
        //     }
        //     else{
        //         ans+=(count*(count-1))/2;
        //         count=1;

        //     }
        // }
        // if(!flag){
        //     cout<<ans<<endl;
        // }

        map<ll,ll> m;
        ll n; cin>>n;
        for(ll i=0; i<n; i++){
            ll a; cin>>a;
            m[a]++;
        }
        ll ans=0;
        for(auto it:m){
            ans+=(it.second*(it.second-1))/2;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}