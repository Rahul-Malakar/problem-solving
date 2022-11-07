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
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            v.emplace_back(a,i+1);
        }
        
        sort(v.begin(), v.end());
        cout<<v[n-1].second<<endl;
    }

    return 0;
}