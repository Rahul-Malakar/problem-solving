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
        int a,b;
        cin>>a>>b;
        if(a==1 || b==1){
            cout<<"No"<<endl;
        }
        else if((a%2==0 && b%2==0) || (a%2==0 && b%2!=0) ||(a%2!=0 && b%2==0))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}