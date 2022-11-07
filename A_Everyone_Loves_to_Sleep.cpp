#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int h, m;
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            h = a;
            m = b;
            int ans1,ans2;

            if (H == h)
            {
                if (M == m)
                {
                    ans1= 0 ;ans2= 0 ;
                }
                else if (M > m)
                {
                    ans1= 23 ;ans2= 60 - M + m ;
                }
                else if (M < m)
                {
                    ans1= 0 ;ans2= m - M ;
                }
            }
            else if (H > h)
            {
                if (M == m)
                {
                    ans1= 24 - H + h ;ans2= 0 ;
                }
                else if (M > m)
                {
                    ans1= 24 - H + h - 1 ;ans2= 60 - M + m ;
                }
                else if (M < m)
                {
                    ans1= 24 - H + h ;ans2= m - M ;
                }
            }
            else if (H < h)
            {
                if (M == m)
                {
                    ans1= h - H ;ans2= 0 ;
                }
                else if (M > m)
                {
                    ans1= h - H - 1 ;ans2= 60 - M + m ;
                }
                else if (M < m)
                {
                    ans1= h - H ;ans2= m - M ;
                }
            }

            ans=min(ans,(60*ans1)+ans2);
        }
        cout<<ans/60 <<" " <<ans%60 <<endl;
    }
    return 0;
}