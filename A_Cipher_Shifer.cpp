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
        int a; cin>>a;
        string s; cin>>s;
        string ans;
        char cur;
        int flag=0;
        for(int i=0; i<a; i++){
            if(flag==0){
                ans+=s[i];
                cur = s[i];
                flag=1;
            }
            else{
                if(s[i]==cur){
                    flag=0;
                }
            }
        }
        cout<<ans<<endl;

    }
    

    return 0;
}