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
        int en=0, on=0;
        int a; cin>>a;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            (b&1)?on+=1 : en+=1;
        }
        if(en==a || on == a){
            cout<<0<<endl;
        }
        else{
            cout<<en<<endl;
        }
    }

    return 0;
}