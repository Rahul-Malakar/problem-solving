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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int> t;
        int x =v[0];
        for(int i=0; i<n; i++){
            if(v[i]<=x){
                t.eb(v[i]);
                x = min(x,v[i]);
            }
        }
        int ans =n;
        int m = t.size();
        for(int i=m-1; i>=0; i--){
            ans = min(ans, t[i]+n-m+i);
        }
        cout<<ans<<endl;
           
    }
    
    return 0;
}