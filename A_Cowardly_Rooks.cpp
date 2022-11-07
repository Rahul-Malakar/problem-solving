//RAHUL MALAKAR 2112022

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
        int m,n; cin>>m>>n;
        set<int> scol, srow;
        for(int i=0; i<n; i++){
            int a,b; cin>>a>>b;
            scol.insert(b);
            srow.insert(a);
        }
        if(scol.size()==m && srow.size()==m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}