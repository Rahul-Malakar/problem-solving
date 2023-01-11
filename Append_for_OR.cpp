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
        ll a,b; cin>>a>>b;
        ll sum=0;
        for(ll i=0; i<a; i++){
            ll c; cin>>c;
            sum|=c;
        }
        if(sum==0){
            cout<<b<<endl;
            continue;
        }
        ll ans=sum^b;
        
        vll lage;
        ll lag=0, cur=0, flag=0;
        while(sum>0){
            cur=sum%2;
            lag=b%2;
            if(cur==1 && lag==0){
                flag=1;
                break;
            }
            sum/=2;
            b/=2;
            // cout<<cur<<lag<<endl;

        }
        if(flag){
            cout<<-1<<endl;
        }
        else{cout<<ans<<endl;}
    }

    return 0;
}