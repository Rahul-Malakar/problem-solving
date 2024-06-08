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

    int n;
    cin >> n;
    int mod = 1e9 + 7;
    vector<vector<char>> v(n, vector<char>(n,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n,0));

    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '.')
            {
                if (i > 0)
                {
                   ( dp[i][j] += dp[i - 1][j]) %= mod;
                }
                if (j > 0)
                {
                    (dp[i][j] += dp[i][j - 1]) %= mod;
                }
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n - 1][n - 1];

    return 0;
}