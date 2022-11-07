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
        int a, b;
        cin >> a >> b;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int c;
            cin >> c;
            v.emplace_back(c);
        }
        int count = 0;
        for (int i = 1; i < a - 1; i ++)
        {
            if(v[i] > (v[i - 1] + v[i + 1])){
                count++;
            }
        }
        if(b==1){
            cout<<(a-1)/2<<endl;

        }
        else{
            cout<<count<<endl;
        }
    }

    return 0;
}