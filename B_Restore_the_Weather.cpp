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
        int a,b; cin>>a>>b;
        vector<pair<int,int>> vp;
        for(int i=0; i<a; i++){
            int c; cin>>c;
            vp.eb(make_pair(c,i));
        }
        vector<int> v2;
        for(int i=0; i<a; i++){
            int d; cin>>d;
            v2.eb(d);
        }
        sort(vp.begin(),vp.end());
        sort(v2.begin(),v2.end());
        vector<int> ans(a);
        for(int i=0; i<a; i++){
            ans[vp[i].second]=v2[i];
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}