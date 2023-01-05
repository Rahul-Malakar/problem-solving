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

#define forl(i, n) for (int i = 0; i < n; i++)
#define forle(i, n) for (int i = 0; i <= n; i++)

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    vll v;
    ll maxi = 0;
    for (ll i = 0; i < 4; i++)
    {
        ll a;
        cin >> a;
        if (a > maxi)
        {
            maxi = a;
        }
        v.eb(a);
    }
    for (ll i = 0; i < 4; i++)
    {
        if (v[i] == maxi)
        {
            v.erase(v.begin() + i);
        }
    }
    for (ll i = 0; i < 4; i++)
    {
        if (v[i] != maxi)
        {
            v[i] = maxi - v[i];
        }
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}