// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        set<string> st;
        for (auto &s : a)
        {
            cin >> s;
            st.insert(s);
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            int L = a[i].length();
            bool got = false;
            for (int j = 0; j < L - 1; j++)
            {
                string left = a[i].substr(0, j + 1);
                string right = a[i].substr(j + 1);
                if (st.count(left) and st.count(right))
                {
                    got = true;
                    break;
                }
            }
            ans += got ? '1' : '0';
        }
        cout << ans << '\n';
    }

    return 0;
}