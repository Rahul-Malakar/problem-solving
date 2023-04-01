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
        ll n; cin>>n;
        ll l=-1;
        ll r=1e9;
        while(r-l>1){
            ll mid=(r+l)>>1;
            if(mid*mid>=n){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        cout<<r-1<<endl;
    }

    return 0;
}