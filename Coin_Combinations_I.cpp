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

int dp[1000001];

int main()
{
    
    ios_base::sync_with_stdio(false);
    int mod = 1e9 + 7;
    int n,x; cin>>n>>x;
    vi v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<x; i++){
        dp[i] = 0;
    }
    dp[0] = 1;
    for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i>=v[j]){
                (dp[i] += dp[i-v[j]])%=mod;
            }
        }
    }
    cout<<dp[x]<<endl;

    return 0;
}