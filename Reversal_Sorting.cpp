// Rahul Malakar 2112022

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    ll t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        ll a, b;

        cin >> a >> b;

        vector<ll> v;

        for (int i = 0; i < a; i++)
        {

            int a;
            cin >> a;
            v.emplace_back(a);
        }

        int flag = 0;

        for (int i = 0; i < a - 1; i++)
        {

            if (v[i] > v[i + 1])
            {
                if ((v[i] + v[i + 1]) > b)
                {
                    flag = 1;

                    break;
                }

                else
                {
                    swap(v[i], v[i + 1]);
                }
            }
        }

        if (!flag)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}