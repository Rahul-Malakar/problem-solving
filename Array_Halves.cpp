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
        vll v;
        ll sum=0;
        for(ll i=0; i<2*a; i++){
            ll b; cin>>b;
            v.eb(b);
        }
        ll i=0, j=2*a-1;
        while(i<j){
            if(v[i]>a && v[j]<=a){
                sum+=j-i;
                i++;
                j--;
            }
            else if(v[i]>a && v[j]>a){
                j--;
            }
            else if(v[i]<=a && v[j]<=a){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        cout<<sum<<endl;
             
    }

    return 0;
}