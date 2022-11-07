// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll holes[1000004];
int main()
{

    ios_base::sync_with_stdio(false);

    int n, h, swaps;
    cin >> n >> h >> swaps;

    for (int i = 0; i < h; i++)
    {
        int hole;
        cin >> hole;
        holes[hole] = 1;
    }

    int current = 1;
    for (int i = 0; i < swaps; i++)
    {
        int pos, npos;
        cin >> pos >> npos;
        if (current == pos && (!holes[pos]))
        {
            current = npos;
        }
        else if (current == npos && (!holes[npos]))
        {
            current = pos;
        }
    }
    cout << current;

    return 0;
}