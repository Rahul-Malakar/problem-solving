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
    ll mod=1000000007;
    while(t--)
    {
        ll a; cin>>a;
        string s1, s2; cin>>s1>>s2;
        ll ano=0, zz=0, oo=0;
        vi ans;
        for(ll i=0; i<a; i++){
            if((s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0')){
                ano++;
            }
            else if((s1[i]=='0' && s2[i]=='0')){
                ans.eb(2);
            }
            else if((s1[i]=='1' && s2[i]=='1')){
                ans.eb(2);
            }
        }
        
        if(ano%2==0){
            if(ano!=0){
                ans.eb(ano);
            }
            ll pr=1;
            for(auto it:ans){
                pr*=it;
                pr=pr%mod;
            }
            cout<<pr%mod<<endl;
        }
        else{
            cout<<0<<endl;

        }
        
    }

    return 0;
} 