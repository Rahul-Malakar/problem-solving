// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a, b, l, r;
    cin >> a >> b >> l >> r;
    vector<int> vz, vx;
    for (int i = 0; i < a; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        vz.emplace_back(x1);
        vz.emplace_back(x2);
    }
    for (int i = 0; i < b; i++)
    {
        int y1, y2;
        cin >> y1 >> y2;
        vx.emplace_back(y1);
        vx.emplace_back(y2);
    }

    int count = 0;

    for (int i = l; i <= r; i++)
    {
        int flag = 0;
        for (int j = 0; j < 2 * a; j += 2)
        {
            for (int k = 0; k < 2 * b; k += 2)
            {
                int temp1 = vx[k] + i;
                int temp2 = vx[k + 1] + i;

                if (!(temp1 > vz[j + 1] || temp2 < vz[j]))
                {

                    count++;

                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
    }
    cout << count;
    return 0;
}