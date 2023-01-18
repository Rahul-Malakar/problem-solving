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
        ll a,flag=0; cin>>a;
        ll minipos=INT_MAX, maxneg=INT_MIN;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            if(b==0){
                flag=1;
            }
            if(b<0){
                if(b>maxneg){
                    maxneg=b;
                }
            }
            else{
                if(b<minipos){
                    minipos=b;
                }
            }
        }
        ll ans=min(abs(maxneg+1),minipos-1);
        if(flag){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }

    return 0;
}