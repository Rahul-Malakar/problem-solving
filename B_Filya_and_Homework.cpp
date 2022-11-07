// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    set<ll> st;
    for (ll i = 0; i < t; i++)
    {
        int a; cin>>a;
        st.insert(a);
    }
    if(st.size()<3){
        cout<<"YES";
    }
    else if(st.size()>3){
        cout<<"NO";
    }
    else{
        vector<ll> v{st.begin(), st.end()};
        (v[0]+v[2]==2*v[1])? cout<<"YES" : cout<<"NO";
    }
    

    return 0;
}