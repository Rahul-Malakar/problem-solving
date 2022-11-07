#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define sp setprecision
#define eb emplace_back
#define vi vector<int>

int main ()
{
    ll t, c;
    cin >> t >> c;
    if (c <= (t + 1) / 2)
    {
        cout << 2 * c - 1 << endl;
    }
    else
    {
        c -= ((t + 1) / 2);
        cout << 2 * c << endl;
    }
}