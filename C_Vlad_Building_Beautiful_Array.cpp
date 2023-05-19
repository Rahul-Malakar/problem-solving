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
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        int a; cin>>a;
        vector<int> v;
        int ce=0, co=0; int mino=INT_MAX, mine=INT_MAX;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v.eb(b);
            if(b&1){
                co++;
                mino = min(mino,b);
            }
            else{
                ce++;
                mine = min(mine,b);
            }
        }
        if(ce==0 || co == 0){
            cout<<"YES"<<endl;
        }
        else if(mino<mine){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}