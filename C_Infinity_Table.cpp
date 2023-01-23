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
        ll a; cin>>a;
        ll low,high;
        if(floor(sqrt(a))==ceil(sqrt(a))){
            low=sqrt(a)-1, high = sqrt(a);
        }
        else{
            low=floor(sqrt(a)), high = low+1;
        }
        ll mid = ((low)*(low) + (high*high))/2 +1;
        ll x=high, y=high;
        if(mid==a){
            
        } 
        else if(a-mid>0){
            y=y-(a-mid);
        }
        else{
            x=x-(mid-a);
        }
        cout<<x<<" "<<y<<" "<<endl;
        
    }

    return 0;
}