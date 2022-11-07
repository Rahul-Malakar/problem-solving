#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        int flag = 0;
        ll a;
        cin >> a;
        string s;
        cin >> s;
        if (s.size() > 2)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}