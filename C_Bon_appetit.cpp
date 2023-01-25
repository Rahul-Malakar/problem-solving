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
        int a,b; cin>>a>>b;
        vll v(a+1,0);
        for(int i=0; i<a; i++){
            int c; cin>>c;
            v[c]++;
        }
        for(auto it:v){
            cout<<it<<endl;
        }
    }

    return 0;
}