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

long long solve(vector<long long> &v1, vector<long long> &v2, long long i, long long pre, vector<vector<long long>> &dp){

    if(i==0){
        if(pre==0){
            return dp[i][pre]=v1[0];
        }
        else{
            return dp[i][pre]=v2[0];
        }
    }

    if(dp[i][pre]!=-1){
        return dp[i][pre];
    }
    
        dp[i][0] = max(v1[i] + solve(v1,v2, i-1, 1, dp), solve(v1,v2,i-1,0,dp));
        dp[i][1] = max(v2[i] + solve(v1,v2, i-1, 0, dp), solve(v1,v2,i-1,1,dp));
    

    return max(dp[i][0], dp[i][1]);

}


int main()
{
    
    ios_base::sync_with_stdio(false);

    long long a; cin>>a;
    vector<long long> v1,v2;
    for(long long i=0; i<a; i++){
        long long b; cin>>b;
        v1.eb(b);
    }
    for(long long i=0; i<a; i++){
        long long c; cin>>c;
        v2.eb(c);
    }

    // vector<vector<long long>> dp(a+1, vector<long long>(2,-1));

    // cout<<max(solve(v1,v2,a-1,0, dp), solve(v1,v2,a-1,1, dp));

    vector<vector<long long>> dp(a+1, vector<long long>(2,0));
    
    dp[0][0] =  v1[0]; dp[0][1]=v2[0];
    for(int i=1; i<a; i++){
        dp[i][0] = max(dp[i-1][1] + v1[i], dp[i-1][0]);
        dp[i][1] = max(dp[i-1][0] + v2[i], dp[i-1][1]);
    }
 
    cout<<max(dp[a-1][0],dp[a-1][1]);
}