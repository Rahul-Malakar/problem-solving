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
        ll a,b,c; cin>>a>>b>>c;
        vi cake,dis;
        for(ll i=0; i<a; i++){
            ll cakey; cin>>cakey;
            cake.eb(cakey);
        }
        for(ll i=0; i<a; i++){
            ll disy; cin>>disy;
            dis.eb(disy);
        }
        
        ll bc=b-c;
        if(bc==0){
            ll com = cake[0]-dis[0];
            ll flag=0;
            for(ll i=1; i<a; i++){
                if(cake[i]-dis[i]!=com){
                    flag=1;
                    break;
                }
            }
            if(flag){cout<<"NO"<<endl; continue;}
            else{
                cout<<"YES"<<endl; continue;
            }
        }
        else{
            vector<pair<ll,ll>> vp;
            
            for(ll i=0; i<a; i++){
                vp.emplace_back(make_pair(cake[i]-bc,cake[i]+bc));
            }
            ll addy = vp[0].first-dis[0];
            ll minr=INT_MAX;
            
            for(ll i=0; i<a; i++){
                dis[i]+=addy;
            }
            for(ll i=0; i<a; i++){
                minr=min(minr,vp[i].second-dis[i]);
            }
            if(minr<0){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}

            
        }
    }

    return 0;
}