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

    int t; cin>>t;
    vi a(t), b(t), c(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
    }

    vector<vector<int>> dp(t, vector<int>(3, 0));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for (int i = 1; i < t; i++)
    {
        dp[i][0] = a[i] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b[i] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = c[i] + max(dp[i - 1][1], dp[i - 1][0]);
    }

    cout<<max({dp[t - 1][0],dp[t - 1][1],dp[t - 1][2]});

    return 0;
}