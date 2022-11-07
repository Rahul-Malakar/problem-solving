#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int amax = 0;
    int winner;
    int sum1 = 0, sum2 = 0, lead = 0;
    int flag = 0;

    for (int i = 0; i < a; i++)
    {
        int b, c;
        cin >> b >> c;
        sum1 += b;
        sum2 += c;
        int diff;
        if (sum1 > sum2)
        {
            diff = sum1 - sum2;
            if (diff > lead)
            {
                lead = diff;
                winner = 1;
            }
        }
        else
        {
            diff = sum2 - sum1;
            if (diff > lead)
            {
                lead = diff;
                winner = 2;
            }
        }
    }
    cout << winner << " " << lead;
    return 0;
}