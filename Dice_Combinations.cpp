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
    int MOD=1e9+7;
    int n;
    cin >> n;
    vi dp(n+1, 0);
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                (dp[i] += dp[i-j]) %= MOD;
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}