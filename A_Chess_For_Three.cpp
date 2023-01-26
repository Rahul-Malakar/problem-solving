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

    ll t;
    cin >> t;
    int flag=0;
    vi v={1,1,0};
    for(int i=0; i<t; i++){
        // cout<<v[0]<<v[1]<<v[2]<<endl;
        int x; cin>>x;
        if(v[x-1]==0){
            flag=1;
            break;
        }
        else{
            v[(x)%3]^=1;
            v[(x+1)%3]^=1;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}