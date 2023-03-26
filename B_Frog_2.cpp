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

int solve(vector<int> v, vector<int> dp, int n, int k){
    if(n<=0){
        return 0;
    }
    if(dp[n]!=INT_MAX){
        return dp[n];
    }
    for(int i=1; i<=k ; i++){
        if(n>i-1){
            dp[n] = min(dp[n], solve(v,dp, n-i, k) + abs(v[n] - v[n-i]));
        }
        
    }
    return dp[n-1];
    
    
}


int main()
{
    
    ios_base::sync_with_stdio(false);
    
    ll n,k;
    cin >> n >> k;
    vector<int> v, dp(n+1, INT_MAX);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v.eb(a);
    }

    // cout<<solve(v, dp , n, k);
    
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) if (i-j >= 0){
            dp[i] = min(dp[i], dp[i-j] + abs(v[i] - v[i-j]));
        }
    }
    cout<<dp[n-1];


    return 0;
}