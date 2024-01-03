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
        int n; cin>>n;
        int lage = log2(n);
        lage = 1<<lage;
        if(n&1){
            cout<<lage-1<<endl;
        }
        else{
            if((lage & (lage-1) )== 0){
                cout<<lage-1<<endl;
            }
            else{
                cout<<lage<<endl;
            }
        }
    }
    

    return 0;
}