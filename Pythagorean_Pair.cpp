// RAHUL MALAKAR 2112022

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
        ll n;
        cin >> n;
        ll flag=0;
        // for (ll i = 0; i <= 1e3; i++)
        // {
        //     if((floor(sqrt(a-(i*i)))==ceil(sqrt(a-(i*i))))){
        //         flag=1;
        //         cout<<i<<" "<<sqrt(a-(i*i))<<endl;
        //         break;
        //     }
            
        // }
        // if(flag==0){
        //     cout<<-1<<endl;

        // }
        for(int i = 0; i * i <= n; ++i){
            ll x = n - i*i;
            ll y = sqrt(x);
            if(ceil(x) == floor(x)){
                cout << x << " " << y << endl;
                break;
            }
            else{
                cout << -1 << endl;
                break;
            }
        }
    }

    return 0;
}