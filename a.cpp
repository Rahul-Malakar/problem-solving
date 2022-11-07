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
        vector<ll> v;
        ll a, b;
        cin >> a >> b;
        for (ll i = 0; i < a; i++)
        {
            ll n;
            cin >> n;
            v.emplace_back(n);
        }
        for (ll i = 0; i < b; i++)
        {

            for (ll j = i; j < a; j += b)
            {
                if (v[i] < v[j])
                {
                    swap(v[i], v[j]);
                }
            }
        }
        ll sum = 0;
        for (ll i = 0; i < b; i++)
        {

            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}