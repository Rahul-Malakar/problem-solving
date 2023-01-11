// RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    ll a, b, c;
    cin >> a >> b >> c;
    vll v(a, 0), v2(a, 0);
    ll kuchv = min(a / 2, b);
    ll kuchnhi = max(a / 2, b);
    if (a == 1 || a==0)
    {
        if (b == c)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        cout << b << ':' << c << endl;
    }
    else
    {
        if (b >= (a+1) / 2 && c >= (a+1) / 2)
        {
            cout << 0 << endl;
            ll first = 0;
            ll next = 0;
            while (b--)
            {
                first = first % kuchv;
                v[first]++;
                first++;
                
            }

            while (c--)
            {

                next = next % (a - kuchv);

                v2[next + kuchv]++;
                next++;
            }
        }
        else
        {
            if (b < ((a+1) / 2))
            {
                
                if (c + b < a)
                {
                    cout << a - (b + c) << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
                ll ind = 0;
                while (c--)
                {
                    
                    v2[ind%(a-b)]++;
                    ind++;
                }

                ind = 0;
                while (b--)
                {
                    v[ind]++;
                    ind++;
                }
            }
            else if (c < ((a+1) / 2))
            {
                
                if (c + b < a)
                {
                    cout << a - (b + c) << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
                ll ind = 0;
                while (b--)
                {
                    
                    v[ind%(a-c)]++;
                    ind++;
                }

                ind = 0;
                while (c--)
                {
                    v2[ind]++;
                    ind++;
                }
            }
        }
        sort(v2.begin(), v2.end());
        for (ll i = 0; i < a; i++)
        {
            cout << v[i] << ':' << v2[i] << endl;
        }
    }

    return 0;
}