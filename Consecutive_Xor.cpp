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

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a;
        cin >> a;
        ll v[a];
        ll f = 1;
        ll ins = 0;
        for (ll i = 0; i < a; i++)
        {
            cin >> v[i];
            ins ^= v[i];
        }
        ll fin = a;
        if (ins)
            fin -= 1;
        if (fin == a - 1)
        {
            if (fin % 2 == 1)
                f = 0;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}