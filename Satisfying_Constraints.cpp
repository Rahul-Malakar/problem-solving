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
    while (t--)
    {
        ll mini =0, maxi = INT_MAX;
      
        vll v;
        ll n; cin>>n;
        for(ll i=0; i<n; i++){
            ll a,b; cin>>a>>b;
            
            if(a==1){
                
                mini = max(mini, b);
            }
            else if(a==2){
                maxi = min(maxi,b);
            }
            else if(a==3){
                v.emplace_back(b);
            }
        }
        ll nalge =0;
        
        if(mini>=maxi){
            cout<<0<<endl;
            continue;
        }

        for(auto it:v){
            if(it<mini || it>maxi){
                nalge++;
            }
        }
        
        int ans = maxi-mini+1-(v.size()-nalge);
        cout<<ans<<endl;
    }
    
    return 0;
}