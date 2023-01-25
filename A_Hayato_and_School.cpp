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

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> o, e;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
                o.push_back(i + 1);
            else
                e.push_back(i + 1);
        }
        if (o.size() >= 3)
        {
            cout << "YES\n";
            cout << o[0] << ' ' << o[1] << ' ' << o[2] << '\n';
        }
        else if (o.size() >= 1 && e.size() >= 2)
        {
            cout << "YES\n";
            cout << o[0] << ' ' << e[0] << ' ' << e[1] << '\n';
        }
        else
            cout << "NO\n";
    }

    return 0;
}