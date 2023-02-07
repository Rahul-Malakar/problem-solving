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
        ll a; cin>>a;
        ll sum=a;
        ll al=0, bob=0;
        ll i=1,j=0;
        while(sum>=i){
            if(j&1){
                bob+=i;
                sum-=i;
                i+=4;
                
            }
            else{
                al+=i;
                sum-=i;
                i+=4;
            }
            j++;
            // cout<<al<<" "<<bob<<endl;
        }
        if(j&1){
            cout<<al<<" "<<bob+sum<<endl;
        }
        else{
            cout<<al+sum<<" "<<bob<<endl;
        }
        
    }

    return 0;
}