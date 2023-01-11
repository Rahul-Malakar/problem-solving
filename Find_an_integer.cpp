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
    int t;
    cin >> t;
    while (t--)
    {
        int ans, x, y;
        cin >> x >> y;
        if ((x * y - x - y) < 0)
            cout << 2 * x * y - x - y << endl;
        else
            cout << x * y - x - y << endl;
    }

    return 0;
}