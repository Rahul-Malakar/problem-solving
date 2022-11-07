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
        vector<ll> vskill, vzero, vone;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            vskill.emplace_back(b);
        }     
        for(ll i=0; i<a; i++){
            ll c; cin>>c;
            if(vskill[i]==0){
                vzero.emplace_back(c);
            }
            else{
                vone.emplace_back(c);
            }
        }
        ll minsize=min(vzero.size(), vone.size());
        ll sum=0;
        sort(vzero.rbegin(), vzero.rend());
        sort(vone.rbegin(), vone.rend());
        for(ll i=0; i<minsize; i++){
            sum+=2*vzero[i];
            sum+=2*vone[i];
        }
        if(minsize==vzero.size()){
            for(ll i=minsize; i<vone.size(); i++){
                sum+=vone[i];
            }
        }
        else{
            for(ll i=minsize; i<vzero.size(); i++){
                sum+=vzero[i];
            }
        }
        if(vzero.size()==vone.size()){
            cout<<sum-min(vzero[vzero.size()-1],vone[vone.size()-1])<<endl;
        }
        else{
            cout<<sum<<endl;
        }

        
    }

    return 0;
}