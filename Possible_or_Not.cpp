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
        ll a,b; cin>>a>>b;
        vi v; 
        for(ll i=0; i<a; i++){
            ll c; cin>>c;
            v.eb(c);
        }

        vi ans;
        for(ll i = 0; i<a; i++){
            ll cur = v[i];
            if((cur|b)==cur){
                ans.eb(cur);
            }
        }

        if(ans.empty()){
            cout<<"NO"<<endl;
        }
        else if(ans.size()==1){
            if(ans[0]==b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            ll answ = ans[0];
            for(ll i=1; i<ans.size(); i++){
                answ &= ans[i];
            }
            if(answ==b){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        }
        

        
    }

    return 0;
}