// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        ll a;

        cin >> a;

        string str;

        cin >> str;

        ll count = 0;

        for (int i = 0; i < a - 1; i++)
        {

            if (str[i] == '1' && str[i + 1] == '0')
                count++;
        }

        cout << count << endl;
    }

    return 0;
}