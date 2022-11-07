// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2010
int A[N],hehe[N];
int main()
{
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=m;i++)
    {
      cin >> A[i];
      hehe[i] = A[i];
    }
    int now;
    int ans1=0,ans2=0;
    for (int i=1;i<=n;i++)
    {
        int big =-1;
        for (int j=1;j<=m;j++)
        {
            if (big<A[j] && A[j]>0)
            {
                big  = A[j];
                now = j;
            }
        }
        if (big>0)
        {
            ans1+=big;
            A[now]--;
        }
    }
    for (int i=1;i<=n;i++)
    {
        int small = 999999999;
        for(int j=1;j<=m;j++)
            if (small>hehe[j] && hehe[j]>0)
            {
                small = hehe[j];
                now = j;
            }
        if (small!=999999999)
        {
            ans2+=small;
            hehe[now]--;
        }
    }
    cout << ans1 << " " << ans2 <<endl;
 
    return 0;
}