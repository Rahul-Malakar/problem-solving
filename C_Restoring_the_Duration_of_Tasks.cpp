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
        int a;
        cin >> a;
        vector<int> v1, v2;
        for (int i = 0; i < a; i++)
        {
            int val1;
            cin >> val1;
            v1.emplace_back(val1);
        }
        for (int i = 0; i < a; i++)
        {
            int val2;
            cin >> val2;
            v2.emplace_back(val2);
        }
        cout << v2[0] - v1[0] << " ";
        for (int i = 1; i < a; i++)
        {
            if (i == a - 1)
            {
                if (v2[i - 1] > v1[i])
                {
                    cout << v2[i] - v2[i - 1];
                }
                else
                {
                    cout << v2[i] - v1[i];
                }
            }
            else
            {
                if (v2[i - 1] > v1[i])
                {
                    cout << v2[i] - v2[i - 1] << " ";
                }
                else
                {
                    cout << v2[i] - v1[i] << " ";
                }
            }
        }cout<<endl;
    }

    return 0;
}