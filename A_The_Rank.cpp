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

    ll count=1;
    ll first=0;

    for(int i=0; i<4; i++){
        int a; cin>>a;
        first+=a;
    }

    for(int i=1; i<t; i++)
    {
        ll sum=0;
        for(int j=0; j<4; j++){
            int b; cin>>b;
            sum+=b;
        }
        if(sum>first){
            count++;
        }

    }
    cout<<count<<endl;

    return 0;
}