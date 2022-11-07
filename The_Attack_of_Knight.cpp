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
        int x, y;
        cin >> x >> y;
        int a, b;
        cin >> a >> b;
        int flag = 0;

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if ((abs(x - i) == 2 && abs(y - j) == 1) || (abs(y - j) == 2 && abs(x - i) == 1))
                {
                    if ((abs(a - i) == 2 && abs(b - j) == 1) || (abs(b - j) == 2 && abs(a - i) == 1))
                    {

                        if (x == i || y == j || a == i || b == j)
                        {
                            break;
                        }
                        else
                        {
                            cout << "YES" << endl;
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}