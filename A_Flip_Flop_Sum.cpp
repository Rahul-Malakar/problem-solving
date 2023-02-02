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
        ll a;
        cin >> a;
        ll countmin = 0, countnor = 0;
        ll flag = 0;
        vector<ll> v;
        for (ll i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            v.eb(b);
            if (b == 1)
            {
                countnor++;
            }
            else
            {
                countmin--;
            }
        }

        if (countmin == 0)
        {
            cout << countnor - 4 << endl;
        }
        else
        {
            for (ll i = 0; i < a - 1; i++)
            {
                if (v[i] == -1 && v[i + 1] == -1)
                {
                    countmin += 2;
                    countnor += 2;
                    break;
                }
            }
            cout << countnor + countmin << endl;
        }
    }

    return 0;
}