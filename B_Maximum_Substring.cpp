//RAHUL MALAKAR 2112022

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
        ll a; cin>>a;
        string s; cin>>s;
        ll z=0, o=0, zs=1, os=1;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='0'){
                z++;
            }
            else{
                o++;
            }
        }
        ll tzs=1, tos=1;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='1'&&s[i+1]=='1'){
                tos++;
            }
            else{
                os=max(tos, os);
                tos=1;
            }
        }
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='0'&&s[i+1]=='0'){
                tzs++;
            }
            else{
                os=max(tzs, os);
                tzs=1;
            }
        }
        vector<ll> ans;
        ans.emplace_back(z*o);
        ans.emplace_back(zs*zs);
        ans.emplace_back(os*os);
        sort(ans.begin(), ans.end());
        cout<<ans[ans.size()-1]<<endl;
        
    }

    return 0;
}