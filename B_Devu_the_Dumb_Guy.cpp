// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll a, b;
    cin >> a >> b;
    vector<ll> v;

    for (ll i = 0; i < a; i++)
    {
        ll c;
        cin >> c;
        v.emplace_back(c);
    }

    sort(v.begin(), v.end());
    ll sum = 0;
    for (ll i = 0; i < a; i++)
    {
        sum += b * v[i];
        (b > 1) ? b-- : b = 1;
    }
    cout << sum;

    return 0;
}