#include <bits/stdc++.h>
using namespace std;

int frequency(int n, int j, int mod) {
    int dp[n+1][j+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
            }
        }
    }
    return dp[n][j/2];
}

int main() {
    int n, m;
    
    cin >> n>> m;
    vector<int> v;
    
    for (int j = 0; j <= n; j++) {
        v.emplace_back(frequency(n, j, m)%m);
    }
    for(int i=0; i<v.size(); i+=2){
        cout<<v[i]<<" ";
    }
    if(v.size()&1){
        for(int i=v.size()-2; i>=0; i-=2){
            cout<<v[i]<<" ";
        }
    }
    else{
        for(int i=v.size()-1; i>=0; i-=2){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
