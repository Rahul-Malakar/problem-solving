// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        int count = 0;
        for (int i = 1; i < 4; i++)
        {
            int b;
            cin >> b;
            if (b > a)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}