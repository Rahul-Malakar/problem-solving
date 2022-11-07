//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    vector<int> v;
    vector<int> v2(20);
    for (ll i = 0; i < t; i++)
    {
        int a; cin>>a;
        v.emplace_back(a);
        v2[a]++;
    }
    for(auto it:v2){
        cout<<it<<endl;
    }
    for(int i=0; i<t; i++){
        
    }



    return 0;
}