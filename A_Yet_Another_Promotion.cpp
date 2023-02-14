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
        ld a,b; cin>>a>>b;
        ld c,d; cin>>c>>d;
        ld first = (a*d)/(d+1);
        ld lage = min(first,b);
        
        if(floor(c/lage)==ceil(c/lage)){
            
        }
        else{
            
        }
    }

    return 0;
}