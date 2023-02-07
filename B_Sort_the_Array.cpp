// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    int a;
    cin >> a;
    vector<int> v{0};

    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        v.emplace_back(b);
    }
    vector<int> sv = v;
    sort(sv.begin(), sv.end());

    if (sv == v)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
    }
    else
    {
        int countd = 0, counti = 0, flag = 0;
        int l = 0, r = 0, ll = 0, rr = 0;
        for (int i = 1; i < a; i++)
        {
            if (v[i] > v[i + 1] && flag == 0)
            {
                l = i;
                ll = i - 1;
                countd++;
                flag++;
            }
            else if ((v[i] < v[i + 1]) && flag == 1)
            {
                r = i;
                rr = i + 1;
                counti++;
                flag--;
            }
            if (countd > 1 || counti > 1)
            {
                cout << "no" << endl;
                return 0;
            }
        }
        if (countd == 1 && counti == 0)
        {
            if (v[a] > ll)
            {
                cout << "yes" << endl;
                cout << l << " " << a;
            }
            else
            {
                cout << "no";
            }
        }
        else if (countd == 1 && counti == 1)
        {
            if (v[r] > v[ll] && v[l] < v[rr])
            {
                cout << "yes" << endl;
                cout << l << " " << r;
            }
            else
            {
                cout << "no";
            }
        }

        return 0;
    }
}