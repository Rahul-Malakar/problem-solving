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

    int n;
    cin >> n;
    vector<int> v{1, 2, 3, 4, 5};
    while (--n)
    {
        for (int i = 1; i < v.size(); i++)
        {
            v[i] += v[i - 1];
        }
    }
    cout << v[v.size() - 1] << endl;

    return 0;
}