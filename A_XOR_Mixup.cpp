// Rahul Malakar 2112022

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
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin >> b;
            v.emplace_back(b);
        }
        int flag=0;
        for (int i = 0; i < a; i++)
        {
            int xora = 0;
            for (int j = 0; j < a; j++)
            {
                if(j==i){
                    continue;
                }
                else{
                    xora=xora^v[j];
                }
                
            }
            if(xora==v[i]){
                cout<<v[i]<<endl;
                flag=1;
                break;
            }if(flag){break;}
        }
    }

    return 0;
}