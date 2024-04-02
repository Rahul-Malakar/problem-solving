#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;


ll dp[1000001];

int main() {
	int n, x;
	cin >> n >> x;
	vi coins(n);
	for (int i = 0; i < n; i++) { cin >> coins[i]; }
	for (int i = 0; i <= x; i++) { dp[i] = INT_MAX; }
	dp[0] = 0;
	for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i>=coins[j]){
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
	cout << (dp[x] == INT_MAX ? -1 : dp[x]) << '\n';
}