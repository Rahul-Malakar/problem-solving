#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minBounties(int N, vector<int>& bounties) {
    vector<int> dp(N, INT_MAX);
    dp[0] = bounties[0];

    for (int i = 0; i < N; i++) {
        int maxReach = min(N - 1, i + i + 1);  // `i + i + 1` covers the next i rides
        for (int j = i + 1; j <= maxReach; j++) {
            dp[j] = min(dp[j], dp[i]+bounties[j]);
        }
        if (i + 1 < N) dp[i + 1] = min(dp[i + 1], dp[i] + bounties[i + 1]);
    }
    return dp[N - 1];
}

int main() {
    int N;
    cin >> N;
    vector<int> bounties(N);
    for (int i = 0; i < N; i++) cin >> bounties[i];
    cout << minBounties(N, bounties);
    return 0;
}