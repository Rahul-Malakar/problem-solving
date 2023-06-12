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
        ll a; cin>>a;
        vll v;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            v.eb(b);
        }
        // for(auto it:v){
        //     cout<<it;
        // }
        // cout<<endl;

        int start=v[0];
        int now = v[0];
        int i=1;
        cout<<1;
        for(i=1; i<a; i++){
            if(v[i]>=now){
                cout<<1;
                now = v[i];
            }
            else if(v[i]>start && v[i]<now){
                cout<<0;
            }
            else if(v[i]<=start){
                cout<<1;
                break;
            }
            
        }
        now = v[i];
        for(int j=i+1; j<a; j++){
            if(v[j]>=now && v[j]<=start){
                cout<<1;
                now = v[j];
            }
            else{
                cout<<0;
            }
        }

    cout<<endl;
    }
    
    return 0;
}