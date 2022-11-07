// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long a;
        cin >> a;
        if (a % 2 == 0)
        {
            cout << (4 * a) + 1 << endl;
        }
        else
        {
            if (a % 4 == 1)
            {
                cout << (2 * a)+1 << endl;
            }
            else
            {
                cout << a + 1 << endl;
            }
        }
    }

    return 0;
}