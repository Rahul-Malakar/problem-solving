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
        if(a==3 && b==3){
            cout<<2<<" "<<2<<endl;
        }
        else if((a==2 && b==3) || (a==3 && b==2)){
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }

        
    }

    return 0;
}