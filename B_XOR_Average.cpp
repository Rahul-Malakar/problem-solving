#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        if (a & 1)
        {
            for (ll i = 0; i < a; i++)
            {
                cout << 1 << " ";
            }
        }
        else
        {
            for (long long i = 0; i < a -2; i++)
                {
                    cout<<2<<" ";
                }
                cout<<1<<" "<<3;
        }
        cout << endl;
    }

    return 0;
}