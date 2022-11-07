#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        int ao[a], an[a];
        
        for (int i = 0; i < a; i++)
        {
            cin >> ao[i];
        }

        int flag = 0;
        an[0]=ao[0];
        for (int i = 1; i < a; i++)
        {
            if(ao[i]==0){
                an[i]=an[i-1];
            }
            else if (ao[i] < an[i - 1])
            {
                flag = 1;
                break;
            }
            
            else
            {
                an[i] = ((ao[i] + an[i - 1]));
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it : an)
            {
                cout << it << " ";
            }cout<<endl;
        }

    }

    return 0;
}