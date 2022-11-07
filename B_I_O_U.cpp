#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> bal(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        --u, --v;
        bal[u] += c;
        bal[v] -= c;
    }
    // for(auto it:bal){
    //     cout<<it<<" ";
    // }
    // cout << endl;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (bal[i] > 0) {
            res += bal[i];
        }
    }

    cout << res;

    return 0;
}