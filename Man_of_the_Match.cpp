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
        
        int maxi =0;
        int ans=0;
        for(int i=0; i<22; i++){
            int run; cin>>run;
            int wic; cin>>wic;
            if(((20*wic)+run) > maxi){
                maxi = (wic*20)+run;
                ans = i+1;
            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}