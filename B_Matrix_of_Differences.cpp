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

    ll t; cin>>t;
    while(t--){
        int n;
    cin >> n;
    ll x = 1;
    ll y = n * n;
    ll a[n][n] = {0};
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (ll j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    a[i][j] = x++;
                    continue;
                }
                a[i][j] = y--;
            }
        }
        else
        {
            for (ll j = n - 1; j >= 0; j--)
            {
                if (j % 2 == 0)
                {
                    a[i][j] = y--;
                    continue;
                }
                a[i][j] = x++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    }
    return 0;
}