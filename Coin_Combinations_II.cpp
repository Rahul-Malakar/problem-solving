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
    int mod = 1e9 + 7;
    int n,x; cin>>n>>x;
    vi v(n);
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=0; i<=n; i++){
        cin>>v[i];
    }

    dp[0][0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            dp[i][j] += dp[i-1][j];
            int left = j - v[i-1];
            if(left>=0){
                (dp[i][j] += dp[i][left]) %= mod;
            }
        }
    }
    cout<<dp[n][x]<<endl;

    return 0;
}