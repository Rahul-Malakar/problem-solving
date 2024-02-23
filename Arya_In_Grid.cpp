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
    
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        ll m; cin>>m;
        ll r; cin>>r;
        ll c; cin>>c;
        ll j; cin>>j;

        ll up = (r-1)/j;
        ll down = (n-r)/j;
        ll right = (m-c)/j;
        ll left = (c-1)/j;

        ll first = up+down+1, second = left+right+1;
        cout<<first*second<<endl;
    }
    

    return 0;
}