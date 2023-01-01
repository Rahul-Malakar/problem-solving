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

    ll t;
    cin >> t;
    forl(i, t)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v, ops;

        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.eb(a);
        }
        for (ll i = 0; i < m; i++)
        {
            ll b;
            cin >> b;
            ops.eb(b);
        }
        sort(ops.begin(),ops.end());
        for(ll i =0; i <m; i++){
            sort(v.begin(), v.end());
            v[0]=ops[i];
        }
        

        ll sum = 0;
        for (auto it : v)
        {
            sum += it;
        }
        cout << sum << endl;
    }

    return 0;
}