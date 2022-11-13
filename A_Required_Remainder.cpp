#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
// int M = 1000000007;
int M = 100000007;
using namespace std;
int main()
{
    fastread();
    ull t;
    cin >> t;
    while (t--)
    {
        ull x, y, n,k;
        cin >> x >> y >> n;
        ull ans=0, max=0;
        for (k = n; k > 0; k--)
        {
            if (k % x == y)
            {
                ans = k;
                if (ans > max)
                {
                    max = ans;
                }
            }
        }
        cout << max<< endl;
    }

    return 0;
}