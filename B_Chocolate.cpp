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
    int now=-1;
    ll ans=1;
    for(int i =0; i<t; i++)
    {
      int a; cin>>a;
      if(a){
        if(now!=-1){
            ans*=i-now;
        }
        now=i;
      }
    }
    if(now==-1){
        ans=0;
    }
    cout<<ans;

    return 0;
}