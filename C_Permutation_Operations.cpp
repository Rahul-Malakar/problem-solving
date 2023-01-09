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
        int a; cin>>a;
        vll v;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v.eb(b);
        }
        vector<pair<int,int>> m;
        for(int i=0; i<a-1; i++){
            m.eb(v[i]-v[i+1],i);
        }
        sort(m.begin(), m.end());
        cout<<1;
        for(auto it:m){
            cout<<" "<<it.second +2;
        }
        cout<<endl;
    }

    return 0;
}