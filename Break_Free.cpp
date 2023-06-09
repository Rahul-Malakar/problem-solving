// RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v, psum;
        ll totsum = 0, e = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.eb(a);
            if (i == 0)
            {
                psum.eb(a);
            }
            else
            {
                psum.eb(a + (psum[i - 1]));
            }
            totsum += a;
        }
        ll ans = 0;
        if (totsum & 1)
        {

            for (ll i = n - 1; i >= 0; i--)
            {
                if (i != n - 1)
                {
                    if (psum[i] & 1)
                    {
                        ans += e;
                    }
                    else
                    {
                        ans += o;
                    }
                }
                if (psum[i] & 1)
                {
                    o++;
                }
                else
                {
                    e++;
                }
            }
            ans += o;
        }
        else
        {
            for (ll i = n - 1; i >= 0; i--)
            {
                if (i != n - 1)
                {
                    if (psum[i] & 1)
                    {
                        ans += o;
                    }
                    else
                    {
                        ans += e;
                    }
                }
                if (psum[i] & 1)
                {
                    o++;
                }
                else
                {
                    e++;
                }
            }
            ans += e;
            
        }
        ans = ans % 1000000007;
        cout << ans << endl;
    }

    return 0;
}