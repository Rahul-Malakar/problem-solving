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

#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i,t)
    {
        int a; cin>>a;
        string s,t; cin>>s>>t;
        int ones =0, zeros = 0, onet =0, zerot = 0;
        for(auto it:s){
            if(it=='1'){
                ones++;
            }
            else{
                zeros++;
            }
        }
        for(auto it:t){
            if(it=='1'){
                onet++;
            }
            else{
                zerot++;
            }
        }
        if(ones==onet && zeros==zerot){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}