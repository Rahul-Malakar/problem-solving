// Rahul Malakar 2112022

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
        
        int first=0, last=0;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            if(b==1){
                first=i;
            }
            else if(b==a){
                last=i;
            }
        }
        if(last<first){
            cout<<first+(a-last)-2<<endl;
        }
        else{
            cout<<first+(a-last)-1<<endl;
        }
    }

    return 0;
}