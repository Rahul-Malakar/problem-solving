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
        string a; cin>>a;
        int flag=0;
        for(auto it:a){
            if(it=='7'){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}