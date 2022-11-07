#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t = 1;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int flag = 0;
        if (x % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if ((floor(log2(x)) == ceil(log2(x))))
        {
            cout << 0 << " " << 0 << " " << x / 2 << endl;
        }
        else
        {
            for (int i = 0; i < 30; i++)
            {
                if (((1 << i) & (x / 2)) && (x / 2 != 1 << i))
                {
                    cout << (x / 2) << " " << (1 << i) << " " << 0 << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << -1 << endl;
            }
        }
    }
}