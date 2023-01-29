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
        string s; cin>>s;
        ll first=0, longest=0;
        
        for(ll i=0; i<a; i++){
            
            if(s[i]=='0'){
                break;
            }first++;

        }
        ll news=0;
        for(ll i=first; i<a; i++){
            if(s[i]=='1' && s[i+1]=='1'){
                news++;
                
            }
            if(s[i]=='0'){
                longest=max(news+1,longest);
                news=0;
            }
        }
        cout<<first+longest<<endl;
    }

    return 0;
}