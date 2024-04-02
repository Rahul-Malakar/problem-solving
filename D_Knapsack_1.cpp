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

    int n, k;
    cin >> n >> k;

    vi weights(n), values(n);
    for(int i=0; i<n; i++){
        cin>>weights[i]>>values[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(k+1,0));
    
    for(int i=weights[0]; i<k; i++){
        dp[0][k] = values[0];
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<=k; j++){
            int nottake = dp[i-1][j];
            int take=INT_MIN;
            if(j>=weights[i]){
                take = dp[i-1][j-weights[i]] + values[i];
            }
            dp[i][j] = max(take,nottake);
        }
    }

    cout<<dp[n-1][k];

    return 0;
}