// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    char a[100][100], c;
    ll us[1000], user[1000];
    ll n, m, x, i, j, i1, j1, xr;
    cin >> n >> m >> xr;
    for (i = 'a'; i <= 'z'; i++)
        us[i] = 100000;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> a[i][j], user[a[i][j]] = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] != 'S')
            {
                ll mn = 100000;
                for (i1 = 1; i1 <= n; i1++)
                {
                    for (j1 = 1; j1 <= m; j1++)
                    {
                        if (a[i1][j1] == 'S')
                            mn = min(mn, (i - i1) * (i - i1) + (j1 - j) * (j1 - j));
                    }
                }
                us[a[i][j]] = min(us[a[i][j]], mn);
            }
        }
    }
    ll q;
    cin >> q;
    ll ans = 0;
    for (i = 1; i <= q; i++)
    {
        cin >> c;
        if (c >= 'a' && c <= 'z')
        {
            if (user[c] == 0)
            {
                cout << "-1";
                return 0;
            }
        }
        else
        {
            int x = c;
            x = x + ('a' - 'A');
            c = char(x);
            if (user[c] == 0)
            {
                cout << -1;
                return 0;
            }
            if (user['S'] == 0)
            {
                cout << -1;
                return 0;
            }
            if (us[c] > xr * xr)
                ans++;
        }
    }
    cout << ans;
}