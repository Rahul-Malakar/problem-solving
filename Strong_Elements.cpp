#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        ll n;

        cin >> n;

        ll arr[n];

        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        ll arr2[n], arr3[n];

        arr2[0] = arr[0];

        for (int i = 1; i < n; i++)
        {

            arr2[i] = __gcd(arr2[i - 1], arr[i]);
        }

        arr3[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {

            arr3[i] = __gcd(arr3[i + 1], arr[i]);
        }

        ll total = 0;

        for (int i = 0; i < n; i++)
        {

            if (i == 0 && arr3[1] > 1)
                total++;

            else if (i == n - 1 && arr2[n - 2] > 1)
                total++;

            else if (__gcd(arr2[i - 1], arr3[i + 1]) > 1)
                total++;
        }

        cout << total << endl;
    }
}