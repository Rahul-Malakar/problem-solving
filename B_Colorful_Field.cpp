// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        v.emplace_back(x);
        v.emplace_back(y);
    }
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int countwaste = 0;
        int flag = 0;
        for (int j = 0; j < 2 * k; j += 2)
        {
            if (v[j] == a && v[j + 1] == b)
            {
                cout << "Waste" << endl;
                flag = 1;
                break;
            }
            else if (v[j] < a || (v[j] == a && v[j + 1] < b))
            {
                countwaste++;
            }
        }
        if (flag == 0)
        {
            int pos = (((a - 1) * m) + b) - countwaste;
            if (pos % 3 == 1)
            {
                cout << "Carrots" << endl;
            }
            else if (pos % 3 == 2)
            {
                cout << "Kiwis" << endl;
            }
            else
            {
                cout << "Grapes" << endl;
            }
        }
    }

    return 0;
}