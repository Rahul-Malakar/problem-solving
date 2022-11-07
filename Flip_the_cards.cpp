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
        int a,b; cin>>a>>b;
        cout<<min(a-b,b)<<endl;
        
    }

    return 0;
}