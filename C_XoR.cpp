//RAHUL MALAKAR 2112022

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
        int sum=0;
        int a,b,c; cin>>a>>b>>c;
        int xr=a^c;
        if(xr<b || xr>a){
            cout<<-1<<endl;
        }
        else{
            sum+=xr-a;
            sum+=b-xr;
            cout<<sum<<endl;
        }

    }

    return 0;
}