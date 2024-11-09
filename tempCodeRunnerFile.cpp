#include <bits/stdc++.h>

using namespace std;

int min_bounty(int n, vector<int>& bounties) {
    if (n == 0) return 0;
    if (n == 1) return bounties[0];
    if (n == 2) return min(bounties[0] + bounties[1], bounties[1]);

    vector<int> dp(n + 1, INT_MAX);

    // Base cases
    dp[0] = 0;
    dp[1] = bounties[0];
    dp[2] = bounties[1];
    if (n >= 3) {
        dp[3] = bounties[2] + min(bounties[0], bounties[1]);
    }

    // Fill the dp array using the relation described
    for (int i = 4; i <= n; ++i) {
        dp[i] = min(dp[i-1] + bounties[i-1], dp[i-3] + bounties[i-2] + bounties[i-1]);
    }

    // The answer for the full sequence of rides
    return dp[n];
}

int main() {
    int n = 5;
    vector<int> bounties = {4, 2, 9, 1, 7};
    cout << "Minimum bounty required: " << min_bounty(n, bounties) << endl;
    return 0;
}