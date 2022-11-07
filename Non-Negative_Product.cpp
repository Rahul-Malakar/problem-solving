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
        int count=0;
        int flag=0;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            if(b==0){
                flag=1;
                
            }
            else if(b<0){
                count++;
            }
        }

        if(flag){
            cout<<0<<endl;
        }
        else{
            if(count&1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }

    return 0;
}