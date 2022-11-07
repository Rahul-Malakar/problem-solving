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
        vector<int> v,vp;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v.emplace_back(b);
        }
        int n; cin>>n;
        for(int j=0; j<n; j++){
            int p,k; cin>>p>>k;
            for(int j1=0; j1<v.size(); j1++){
                if(v[j1]%p==0){
                    vp.emplace_back(v[j1]);
                }
            }
            
        }
        
    }

    return 0;
}