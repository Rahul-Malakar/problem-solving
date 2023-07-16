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
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t; while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (b > 2)
        {
            cout << "YES" << endl;
            
            if (c != 1)
            {
                cout << a << endl;
                for (int i = 0; i < a; i++)
                {
                    cout << 1 << " ";
                }
                cout << endl;
            }
            else
            {
                if (a == 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    int lage = a / 3;
                    if (a % 3 == 0)
                    {
                        cout << lage << endl;
                        for (int i = 0; i < lage; i++)
                        {
                            cout << 3 << " ";
                        }
                        cout << endl;
                    }
                    else if (a % 3 == 1)
                    {
                        cout << lage+1 << endl;
                        for (int i = 0; i < lage - 1; i++)
                        {
                            cout << 3 << " ";
                        }
                        cout << 2 << " " << 2 << " " << endl;
                    }
                    else if (a % 3 == 2)
                    {
                        cout << lage+1 << endl;
                        for (int i = 0; i < lage; i++)
                        {
                            cout << 3 << " ";
                        }
                        cout << 2 << " " << endl;
                    }
                }
            }
        }
        else if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (c == 2)
            {
                cout << "YES" << endl;
                cout << a << endl;
                for (int i = 0; i < a; i++)
                {
                    cout << 1 << " ";
                }
                cout << endl;
            }
            else
            {
                if (a % 2 == 0)
                {
                    cout<<"YES"<<endl;
                    cout << a/2 << endl;
                    for (int i = 0; i < a; i += 2)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}