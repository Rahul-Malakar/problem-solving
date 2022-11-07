#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    string s;
    cin >> s;
    string news;
    if (t % 2 == 0)
    {
        int ileft = t - 2;
        int iright = 1;
        while (ileft >= 0)
        {
            news.push_back(s[ileft]);
            ileft -= 2;
        }
        while (ileft < 0 && iright <= t - 1)
        {
            news.push_back(s[iright]);
            iright += 2;
        }
    }
    else
    {
        int ileft = t - 2;
        int iright = 0;
        while (ileft >= 0)
        {
            news.push_back(s[ileft]);
            ileft -= 2;
        }
        while (ileft < 0 && iright <= t - 1)
        {
            news.push_back(s[iright]);
            iright += 2;
        }
    }
    cout << news;

    return 0;
}