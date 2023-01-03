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


#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll a,b; cin>>a>>b;
    vll v;
    for(ll i=0; i<a; i++){
        ll c; cin>>c;
        v.eb(c);
    }
    if(v.size()==1){
        cout<<1;
        return 0;
    }
    sort(v.rbegin(),v.rend());
    vll ans;
    ll pos=0;
    for(ll i =0; i<v.size()-1; i++){
        
        pos=i;
        ans.eb(v[i]);
        if(v[i]-v[i+1]>b){
            break;
        }
    }
    if(pos==v.size()-2){
        if(v[pos]-v[pos+1]<=b){
            cout<<ans.size()+1;
            
        }
        else{
            cout<<ans.size();
        }
    }
    else{
        cout<<ans.size();
    }
    return 0;
}