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
        int zero=0, one=0;
        for(int i=0; i<a; i++){
            int c; cin>>c;
            if(c==1){
                one++;
            }
            else{
                zero++;
            }
        }
        if(one == 0){
            cout<<"NO"<<endl;
        }
        
        else{
            cout<<"YES"<<endl;
        }
        
    }

    return 0;
}