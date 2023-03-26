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
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int steps=INT_MAX;
    for(int i=1; i<=k; i++){
        if(n-i>=0){
            int jump = solve(v, dp, n-i, k) + abs(v[n]-v[n-i]);
            steps = min(steps, jump);
        }
    }
    dp[n]=steps;
    return dp[n];
}

int main()
{
    
    ios_base::sync_with_stdio(false);

    
    ll t,k;
    cin >> t >> k;
    vector<int> v, dp(t+1, -1);
    for(int i=0; i<t; i++)
    {
        int a; cin>>a;
        v.eb(a);
    }

    cout<<solve(v, dp , t, k);

    return 0;
}