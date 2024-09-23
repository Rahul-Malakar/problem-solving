#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

      
        long long start_year = max(1LL, n - k+1);
        long long end_year = n;

        long long total_leaves = (end_year * (end_year + 1)) / 2 - ((start_year-1) * start_year) / 2;

        if (total_leaves % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}