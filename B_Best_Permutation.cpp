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
        int a; cin>>a;
        if(a&1){
            cout<<1<<" ";
            for(int i=2; i<=a-2; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<a-1<<" "<<a<<" ";
        }
        else{
            for(int i=1; i<=a-2; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<a-1<<" "<<a<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}