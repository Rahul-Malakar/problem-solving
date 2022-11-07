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
        ll a; cin>>a;
        if(a<4){
            cout<<-1<<"\n";
        }
        else if(a==4){
            cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
        }
        else{
            for(ll i=1; i<=a; i+=2){
                cout<<i<<" ";
            }
            for(ll i=2; i<=a; i+=2){

                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}