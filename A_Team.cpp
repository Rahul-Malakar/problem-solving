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
    int t; cin>>t;
    int count =0;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        if(a+b+c>1){
            count++;
        }
    }
    cout<<count;

    return 0;
}
