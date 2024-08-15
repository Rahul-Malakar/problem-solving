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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int lage = 10 * a - 10 * b;
        int ans;
        for (int j = 0; j <= INT_MAX; j++)
        {
            if (lage >= j*(b-100))
            {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
