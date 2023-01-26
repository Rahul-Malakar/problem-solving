// RAHUL MALAKAR 2112022

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
    vi v;
    int maxi=0, maxin=0, mini =INT_MAX, minin = INT_MAX;
    for(int i=0; i<t; i++){
        int a; cin>>a;
        maxi=max(maxi,a);
        mini = min(mini,a);
        v.eb(a);
    }
    for(int i=0; i<t; i++){
        if(v[i]==maxi){
            maxin=i;
            break;
        }
    }
    for(int i=t-1; i>=0; i--){
        if(v[i]==mini){
            minin=i+1;
            break;
        }
    }
    int ans=maxin+(t-minin);
    if(maxin>=minin){
        cout<<ans-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}