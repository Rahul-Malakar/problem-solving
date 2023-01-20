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
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int e=min(a,b), d=max(a,b);
        int curmax=0,i=0;
        while(curmax<=c){
            if(i%2==0){
                e+=d;
                i++;
            }
            else{
                d+=e;
                i++;
            }
            curmax=max(e,d);
        }
        cout<<i<<endl;
    }

    return 0;
}