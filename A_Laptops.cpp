// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    vector<pair<int, int>> v1;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        
        int n,m; cin>>n>>m;
        v1.emplace_back(make_pair(n,m));

    }
    sort(v1.begin(), v1.end()); 
    int flag=0;
    for(int i=1; i<v1.size(); i++){
        if(v1[i].second<v1[i-1].second){
            flag=1;
        }
    } 
    flag ? cout<< "Happy Alex" : cout<< "Poor Alex";

    return 0;
}