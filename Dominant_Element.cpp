#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n] = {0};
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ar[a]++;
        }
        sort(ar, ar + n);
        for(auto it:ar){
            cout<<it<<" "<<endl;
        }
        // if (n == 1)
        // {
        //     cout << "YES" << "\n";
        // }
        // else if (ar[n - 1] > ar[n - 2])
        // {
        //     cout << "YES" << "\n";
        // }
        // else
        // {
        //     cout << "NO" << "\n";
        // }
    }

    return 0;
}