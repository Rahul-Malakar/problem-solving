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
        ll a, b;
        cin >> a >> b;
        vector<ll> v;
        for (ll i = 0; i < a; i++)
        {
            ll c;
            cin >> c;
            v.emplace_back(c);
        }

        multiset<int> m;
        for (ll i = 0; i < v.size() - 1; i++)
        {
            m.insert(v[i + 1] - v[i]);
        }

        for (ll i = 0; i < b; i++)
        {
            ll j, k;
            cin >> j >> k;
            j--;

            if (j - 1 >= 0)
            {
                m.erase(m.lower_bound(v[j] - v[j - 1]));
                m.insert(k - v[j - 1]);
            }
            if (j + 1 < a)
            {
                m.erase(m.lower_bound(v[j + 1] - v[j]));
                m.insert(v[j + 1] - k);
            }
            v[j] = k;
            int ans = *m.begin();
            if (ans < 0)
            {
                cout << abs(ans) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}