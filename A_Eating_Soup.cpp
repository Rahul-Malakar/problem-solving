// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << 1;
    }
    else
    {
        if (b <= a / 2)
        {
            cout << b;
        }
        else
        {
            cout << a - b;
        }
    }

    return 0;
}