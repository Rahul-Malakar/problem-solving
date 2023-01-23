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
        ll left[a], right[a];
        map<pair<ll,ll>,ll> mp;
        for(ll i=0; i<a; i++){
            cin>>left[i]>>right[i];
            mp[{left[i],right[i]}]=1;
        }
        for(ll i =0; i<a; i++){
            for(ll j=left[i]; j<=right[i]; j++){
                if(left[i]==right[i]){
                    cout<<left[i]<<" "<<right[i]<<" "<<j<<endl;
                }
                if(mp[{left[i],j-1}]==1 && mp[{j+1,right[i]}]==1 ){
                    cout<<left[i]<<" "<<right[i]<<" "<<j<<endl;
                }
                if(j==left[i] && mp[{j+1,right[i]}]==1 || j==right[i] && mp[{left[i],j-1}]==1){
                    cout<<left[i]<<" "<<right[i]<<" "<<j<<endl;
                }
            }
        }

        
    }

    return 0;
}