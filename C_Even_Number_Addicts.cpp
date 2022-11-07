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
        int odd=0, even=0;
        vector<int> v;
        for(int i=0; i<a; i++){
            int a; cin>>a;
            if(a&1){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd==2){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        
        
    }

    return 0;
}