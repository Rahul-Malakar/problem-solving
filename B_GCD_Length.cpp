//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
#include<assert.h>
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
        ll a,b,c; cin>>a>>b>>c;
        string x="1", y="1";
        
        for(ll i=1; i<a; i++){
            if(x.size()==a-c){
                x.push_back('1');
            }
            else{
                x.push_back('0');
            }
        }
        for(ll i=1; i<b; i++){
            y.push_back('0');
        }
        cout<<x<<" "<<y<<endl;
                
    }

    return 0;
}