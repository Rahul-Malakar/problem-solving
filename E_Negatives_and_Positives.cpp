#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        ll a; cin>>a;
        ll countmin=0, sm=0, minim=INT_MAX;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            minim=min(minim,abs(b));
            if(b<0){countmin++; sm+=-b;}
            else{
                sm+=b;
            }
            
        }
        if(countmin&1){
            cout<<sm-2*minim<<endl;
        }
        else{
            cout<<sm<<endl;
        }
    }

    return 0;
}