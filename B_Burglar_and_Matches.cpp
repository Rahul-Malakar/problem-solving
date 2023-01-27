//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    int a,b; cin>>a>>b;
    vector<pair<int,int>> v;
    for(int i=0; i<b; i++){
        int c,d; cin>>c>>d;
        v.push_back(make_pair(d,c));
    }
    sort(v.rbegin(), v.rend());
    int ans=0;
    
    for(int i=0; i<b; i++){
        if(v[i].second>=a){
            ans+=v[i].first*a;
            break;
        }
        else{
            ans+=v[i].first * min(v[i].second,a);
            
            a-=v[i].second;
        }

    }
    cout<<ans<<endl;

    return 0;
}