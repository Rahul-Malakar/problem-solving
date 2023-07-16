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
    
    ll t; cin>>t;
    while (t--)
    {
        int a1,a2; cin>>a1>>a2;
        int b1,b2; cin>>b1>>b2;
        int c1,c2; cin>>c1>>c2;

        int ans =1;
        int bobh = b1-a1; int carh = c1-a1;
        if(bobh>=0 && carh>=0){
            ans += abs(min((bobh),(carh)));
        }
        if(bobh<=0 && carh<=0){
            ans += abs(max((bobh),(carh)));
        }

        int bobr = b2-a2; int carr = c2-a2;

        if(bobr>=0 && carr>=0){
            ans += abs(min((bobr),(carr)));
            
        }
        if(bobr<=0 && carr<=0){
            ans += abs(max((bobr),(carr)));
        }
        cout<<ans<<endl;
    }
    

    return 0;
}