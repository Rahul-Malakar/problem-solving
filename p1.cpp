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
        int a,b,c; cin>>a>>b>>c;
        int diff=0;
        if(b>=c){
            diff=b-c;
        }
        else{
            diff=c-b;
            diff+=c;
        }

        if(a==diff){
            cout<<3<<endl;
        }
        else if(a<b){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}