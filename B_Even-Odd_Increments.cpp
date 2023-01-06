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

    ll t;
    cin >> t;
    forl(i,t)
    {
        ll n,q; cin>>n>>q;
        ll sum=0, ec=0, oc=0;
        for(ll i=0; i<n; i++){
            ll a; cin>>a;
            if(a&1){
                oc++;
                sum+=a;
            }
            else{
                ec++;
                sum+=a;
            }
        }
        for(ll i=0; i<q; i++){
            ll p,q;
            cin>>p>>q;
            if(p&1){
                if(q&1){
                    sum+=oc*q;
                    ec+=oc;
                    oc=0;
                }
                else{
                    sum+=oc*q;
                }
            }
            else{
                if(q&1){
                    sum+=ec*q;
                    oc+=ec;
                    ec=0;
                }
                else{
                    sum+=ec*q;
                }
            }
            cout<<sum<<endl;
        }
        
    }

    return 0;
}