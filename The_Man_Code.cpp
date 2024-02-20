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
        if(a==1){
            cout<<1<<' '<<1<<endl;
            continue;
        }
        if(a&1){
            cout<<(a+1)/2<<" ";
        }
        else{
            cout<<(a/2)<<" ";
        }

        if(a%3==0){
            cout<<a/3<<endl;
        }
        else{
            cout<<(a/3)+1<<endl;
        }


    }
    

    return 0;
}