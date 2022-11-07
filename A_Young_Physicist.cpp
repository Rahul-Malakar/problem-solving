// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int A=0, B=0, C=0;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a,b,c; cin>>a>>b>>c;
        A+=a; B+=b; C+=c;
    }
    (A==0 && B==0 && C==0)? cout<<"YES" : cout<<"NO";

    return 0;
}