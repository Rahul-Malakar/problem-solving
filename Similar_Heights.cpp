// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        ll cnt = 0;
        for (auto it : m)
        {
            if (it.second == 1)
            {
                cnt++;
            }
        }
        ll ans = ceil(cnt / 2.0);
        if (cnt == 1)
        {
            int f1, f = 1;
            for (auto it : m)
            {
                if (it.second == 1)
                {
                    f1 = it.first;
                    break;
                }
            }
            for (auto it : m)
            {
                if (it.second > 2) 
                {
                    f = 0;
                    break;
                }
                if (it.second == 2)
                {
                    if (it.first > f1)
                    {
                        f = 0;
                        break;
                    }
                }
            }
            ans += f;
        }
        cout << ans << "\n";
    }
    return 0;
}